#define _CRT_SECURE_NO_DEPRECATE 1
#include "CommentConvert.h"

void CommentConvert(FILE* pfRead, FILE* pfWrite)
{
	State state = NUL_STATE;
	while (state != EOF)
	{
		switch (state)
		{
		case NUL_STATE:
			DoNu1State(pfRead, pfWrite, &state);
			break;
		case C_STATE:
			DoCState(pfRead, pfWrite, &state);
			break;
		case CPP_STATE:
			DoCppState(pfRead, pfWrite, &state);
			break;
		default:
			break;
		}
	}
}

void DoNu1State(FILE* pfRead, FILE* pfWrite, State* ps)
{
	int first = fgetc(pfRead);
	switch (first)
	{
	case '/':
	{
		int second = fgetc(pfRead);
		switch (second)
		{
		case '/':
		{
			fputc(first, pfWrite);
			fputc(second, pfWrite);
			*ps = CPP_STATE;
		}
		break;
		case '*':
		{
			fputc('/', pfWrite);
			fputc('/', pfWrite);
			*ps = C_STATE;
		}
		break;
		default:
			fputc(second, pfWrite);
			break;
		}
	}
	break;
	case EOF:
		*ps = EOF;
		break;
	default:
		fputc(first, pfWrite);
		break;
	}
}


void DoCState(FILE* pfRead, FILE* pfWrite, State* ps)
{
	int first = fgetc(pfRead);
	switch (first)
	{
	case '*':
	{
		int second = fgetc(pfRead);
		switch (second)
		{
		case '/':
		{
			int third = fgetc(pfRead);
			if (third != '\n')
			{
				fputc('\n', pfWrite);
			}
			ungetc(third, pfRead);
			*ps = NUL_STATE;
		}
		break;
		case '*':
		{
			fputc(first, pfWrite);
			ungetc(second, pfRead);
		}
		break;
		default:
			fputc(first, pfWrite);
			fputc(second, pfWrite);
			break;
		}
	}
	break;
	case '\n':
	{
		fputc(first, pfWrite);
		fputc('/', pfWrite);
		fputc('/', pfWrite);
	}
	break;
	default:
		fputc(first, pfWrite);
		break;
	}
}


void DoCppState(FILE* pfRead, FILE* pfWrite, State* ps)
{
	int first = fgetc(pfRead);
	switch (first)
	{
	case EOF:
		*ps = EOF;
		break;
	case '\n':
		fputc(first, pfWrite);
		*ps = NUL_STATE;
		break;
	default:
		fputc(first, pfWrite);

		break;
	}
}
