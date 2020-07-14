/**
 * @param int,long,double
 * @return sign 
 * 
 * @description example standard library function
 * 
 * @version 0.29.0
 * @author  깔끔한청년
 * @seecom C/C++
 * @Since 2020.07.14
 */

int is_whitespace(int ch)
{
    return ch == ' ' || ch == '\f' || ch == '\n' || ch == '\r' || ch == '\t' || ch == '\v';
}

long strtol(const char *nptr) //문자열을 long형 값으로 반환
{
    long sign = 1;
    long x = 0;

    while (is_whitespace(*nptr)) //공백류 문자는 건너뜀
        nptr++;

    switch (*nptr)
    {         //부호
    case '+': //양수부호
        nptr++;
        break;
    case '-': //음수부호
        nptr++;
        sign = -1;
        break;
    }

    for (x = 0; *nptr >= '0' && *nptr <= '9'; nptr++)
        x = x * 10 + (*nptr - '0');

    return sign * x;
}

int strtoi(const char *nptr) //문자열 을  int 형 값으로 반환
{
    return (int)strtol(nptr);
}

double strtof(const char *nptr)
{
    int sign = 1; //부호
    double x;     //변환한 부동소수점수
    double dec;   //소수부 계산용

    while (is_whitespace(*nptr)) //공백류 문자는 건너뜀
        nptr++;

    switch (*nptr)
    {
    case '+':
        nptr++;
        break; //양수부호
    case '-':
        nptr++;
        sign = -1;
        break; //음수부호
    }

    for (x = 0.0; *nptr >= '0' && *nptr <= '9'; nptr++) //정수부
        x = x * 10.0 + (*nptr - '0');

    if (*nptr == '.') //소수부
        nptr++;

    for (dec = 1.0; *nptr >= '0' && *nptr <= '9'; nptr++) // 소수부
        x = x + (dec /= 10.0) * (*nptr - '0');

    if (*nptr == 'E' || *nptr == 'e')
    { //지수부
        int exp;
        int sign = 1; //지수부의값

        switch (*++nptr)
        {         //부호
        case '+': //양수부호
            nptr++;
            break;
        case '-': //음수부호
            nptr++;
            sign = -1;
            break;
        }
        for (exp = 0; *nptr >= '0' && *nptr <= '9'; nptr++)
            exp = 10 * exp + (*nptr - '0');

        switch (sign)
        {
        case 1:
            while (exp-- > 0)
                x *= 10.0;
            break;
        case -1:
            while (exp-- > 0)
                x /= 10.0;
            break;
        }
    }

    return sign * x;
}