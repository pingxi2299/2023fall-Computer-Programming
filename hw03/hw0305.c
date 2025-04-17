#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>

void roll1d6();
void rollAdX();
void rollAdXkYB();
void rollAdXkhHklLkcCB();
void randomEvents();

int main()
{
    int32_t action;
    printf( "Welcome to  \"Dice Frenzy Fiesta\" !\n" );
    printf( "Please refer to README for more information.\n" );
    printf( "0. turn off\n" );
    printf( "1. roll a dice with six faces\n" );
    printf( "2. roll A dices with X faces\n" );
    printf( "3. roll A dices with X faces, choose Y dices to keep.The total result will plus B\n" );
    printf( "4. roll A dices with X faces, keep the H highest, the L lowest, and C of the players choices." );
    printf( "5. special roll. You can roll for a random event." );


    printf( "\n" );
    printf( "*･゜ﾟ･*:.｡..｡.:*･'(*ﾟ▽ﾟ*)'･*:.｡. .｡.:*･゜ﾟ･*" );
    printf( "\n" );

    printf( "Your action:" );
    scanf( "%d" , &action );

    while ( action != 0 )
    {
    if ( action == 1 )
    {
        roll1d6();
    }
    else if ( action == 2 )
    {
        rollAdX();
    }
    else if ( action == 3 )
    {
        rollAdXkYB();
    }
    else if ( action == 4 )
    {
        rollAdXkhHklLkcCB();
    }
    else if ( action == 5 )
    {
        randomEvents();
    }
    

    printf( "\n" );
    printf( "*･゜ﾟ･*:.｡..｡.:*･'(*ﾟ▽ﾟ*)'･*:.｡. .｡.:*･゜ﾟ･*" );
    printf( "\n" );
    printf( "Your action:" );
    scanf( "%d" , &action );
    }
    
    printf( " ∧,_,∧  \n" );
    printf( "(  ╹◡╹)つ━☆・*。\n" );
    printf( "⊂     ﾉ       ・゜+.byebye\n" );
    printf( " し’´Ｊ    *・ °”\n" );

    return 0;
}



void roll1d6()
{
    srand( time( 0 ) );
    int32_t dice = (rand() % 6 ) + 1;

    printf( "\n" );
    printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
    printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , dice );
    printf( "  ＼ヽﾐ  三  彡 ソ\n" );
    printf( "     )ﾐ ､_  彡ノ\n" );
    printf( "    (ﾐ∪三∪彡\n" );
    printf( "     ＼ヾ丿ノ\n" );
    printf( "       ヽ ﾉ\n" );
    printf( "        )ﾉ\n" );
    printf( "       ((\n" );
    printf( "\n" );
    printf( "result: %d" , dice );
    printf( "\n" );
}

void rollAdX()
{
    int32_t a ;
    int32_t x ;
    int32_t a1;
    int32_t a2;
    int32_t a3;
    int32_t a4;
    int32_t a5;
    int32_t a6;
    int32_t a7;
    int32_t a8;
    int32_t a9;
    int32_t a10;
    int32_t total = 0;

    printf( "Please enter A, X: " );
    scanf( "%d %d" , &a , &x );

    if ( a < 0 || a > 10 )
    {
        printf( "Error input A\n" );
        return;
    }
    if( x < 2 || x > 100 )
    {
        printf( "Error input X\n" );
        return;
    }
    
    printf( "\n" );

    srand( time( 0 ) );

    for ( int32_t i = 1 ; i <= a ; i++ )
    {
        int32_t dice = (rand() % x ) + 1;

        if ( i == 1 )
        {
            a1 = dice;
        }
        else if( i == 2 )
        {
            a2 = dice;
        }
        else if( i == 3 )
        {
            a3 = dice;
        }
        else if( i == 4 )
        {
            a4 = dice;
        }
        else if( i == 5 )
        {
            a5 = dice;
        }
        else if( i == 6 )
        {
            a6 = dice;
        }
        else if( i == 7 )
        {
            a7 = dice;
        }
        else if( i == 8 )
        {
            a8 = dice;
        }
        else if( i == 9 )
        {
            a9 = dice;
        }
        else if( i == 10 )
        {
            a10 = dice;
        }

        printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
        printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , dice );
        printf( "  ＼ヽﾐ  三  彡 ソ\n" );
        printf( "     )ﾐ ､_  彡ノ\n" );
        printf( "    (ﾐ∪三∪彡\n" );
        printf( "     ＼ヾ丿ノ\n" );
        printf( "       ヽ ﾉ\n" );
        printf( "        )ﾉ\n" );
        printf( "       ((\n" );
        printf( "\n" );
        
        total += dice;
    }

    printf( "result : " );
    for ( int32_t i = 1 ; i <= a ; i++ )
    {
        if ( i == 1 )
        {
            printf( "%d " , a1 );
        }
        else if( i == 2 )
        {
            printf( "%d " , a2 );
        }
        else if( i == 3 )
        {
            printf( "%d " , a3 );
        }
        else if( i == 4 )
        {
            printf( "%d " , a4 );
        }
        else if( i == 5 )
        {
            printf( "%d " , a5 );
        }
        else if( i == 6 )
        {
            printf( "%d " , a6 );
        }
        else if( i == 7 )
        {
            printf( "%d " , a7 );
        }
        else if( i == 8 )
        {
            printf( "%d " , a8 );
        }
        else if( i == 9 )
        {
            printf( "%d " , a9 );
        }
        else if( i == 10 )
        {
            printf( "%d " , a10 );
        }
        
        printf( "+ " );
        
    }

    printf( "\b\b" );
    printf( "= " );
    printf( "%d\n" , total );
}

void rollAdXkYB()
{
    int32_t a;
    int32_t x;
    int32_t y;
    int32_t b;
    int32_t a1 = 0;
    int32_t a2 = 0;
    int32_t a3 = 0;
    int32_t a4 = 0;
    int32_t a5 = 0;
    int32_t a6 = 0;
    int32_t a7 = 0;
    int32_t a8 = 0;
    int32_t a9 = 0;
    int32_t a10 = 0;
    int32_t y1 = 0;
    int32_t y2 = 0;
    int32_t y3 = 0;
    int32_t y4 = 0;
    int32_t y5 = 0;
    int32_t y6 = 0;
    int32_t y7 = 0;
    int32_t y8 = 0;
    int32_t y9 = 0;
    int32_t y10 = 0;

    printf( "Please enter A, X, Y, B: " );
    scanf( "%d %d %d %d" , &a , &x , &y , &b );

    if ( a < 0 || a > 10 )
    {
        printf( "Error input A\n" );
        return;
    }
    if ( x < 2 || x > 100 )
    {
        printf( "Error input X\n" );
        return;
    }
    if ( b < -10 || b > 10 )
    {
        printf( "Error input B\n" );
        return;
    }
    if ( y < 0 || y > 10 )
    {
        printf( "Error input Y\n" );
        return;
    }

    printf( "\n" );

    srand( time( 0 ) );

    for ( int32_t i = 1 ; i <= a ; i++ )
    {
        int32_t dice = (rand() % x ) + 1;

        if ( i == 1 )
        {
            a1 = dice;
        }
        else if( i == 2 )
        {
            a2 = dice;
        }
        else if( i == 3 )
        {
            a3 = dice;
        }
        else if( i == 4 )
        {
            a4 = dice;
        }
        else if( i == 5 )
        {
            a5 = dice;
        }
        else if( i == 6 )
        {
            a6 = dice;
        }
        else if( i == 7 )
        {
            a7 = dice;
        }
        else if( i == 8 )
        {
            a8 = dice;
        }
        else if( i == 9 )
        {
            a9 = dice;
        }
        else if( i == 10 )
        {
            a10 = dice;
        }

        printf( "%d.\n" , i );
        printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
        printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , dice );
        printf( "  ＼ヽﾐ  三  彡 ソ\n" );
        printf( "     )ﾐ ､_  彡ノ\n" );
        printf( "    (ﾐ∪三∪彡\n" );
        printf( "     ＼ヾ丿ノ\n" );
        printf( "       ヽ ﾉ\n" );
        printf( "        )ﾉ\n" );
        printf( "       ((\n" );
        printf( "\n" );
        
    }

    printf( "Please choode %d dice from above: " , y );

    if ( y == 1 )
        {
            scanf( "%d" , &y1 );
        }
    else if( y == 2 )
        {
            scanf( "%d %d" , &y1 , &y2 );
        }
    else if( y == 3 )
        {
            scanf( "%d %d %d" , &y1 , &y2 , &y3 );
        }
    else if( y == 4 )
        {
            scanf( "%d %d %d %d" , &y1 , &y2 , &y3 , &y4 );
        }
    else if( y == 5 )
        {
            scanf( "%d %d %d %d %d" , &y1 , &y2 , &y3 , &y4 , &y5 );
        }
    else if( y == 6 )
        {
            scanf( "%d %d %d %d %d %d" , &y1 , &y2 , &y3 , &y4 , &y5 , &y6 );
        }
    else if( y == 7 )
        {
            scanf( "%d %d %d %d %d %d %d" , &y1 , &y2 , &y3 , &y4 , &y5 , &y6 , &y7 );
        }
    else if( y == 8 )
        {
            scanf( "%d %d %d %d %d %d %d %d" , &y1 , &y2 , &y3 , &y4 , &y5 , &y6 , &y7 , &y8 );
        }
    else if( y == 9 )
        {
            scanf( "%d %d %d %d %d %d %d %d %d" , &y1 , &y2 , &y3 , &y4 , &y5 , &y6 , &y7 , &y8 , &y9 );
        }
    else if( y == 10 )
        {
            scanf( "%d %d %d %d %d %d %d %d %d %d" , &y1 , &y2 , &y3 , &y4 , &y5 , &y6 , &y7 , &y8 , &y9 , &y10 );
        }
    
    if ( y1 == 1 )
    {
        y1 = a1;
    }
    else if( y1 == 2 )
    {
        y1 = a2;
    }
    else if( y1 == 3 )
    {
        y1 = a3;
    }
    else if( y1 == 4 )
    {
        y1 = a4;
    }
    else if( y1 == 5 )
    {
        y1 = a5;
    }
    else if( y1 == 6 )
    {
        y1 = a6;
    }
    else if( y1 == 7 )
    {
        y1 = a7;
    }
    else if( y1 == 8 )
    {
        y1 = a8;
    }
    else if( y1 == 9 )
    {
        y1 = a9;
    }
    else if( y1 == 10 )
    {
        y1 = a10;
    }
    
    if ( y2 == 1 )
    {
        y2 = a1;
    }
    else if( y2 == 2 )
    {
        y2 = a2;
    }
    else if( y2 == 3 )
    {
        y2 = a3;
    }
    else if( y2 == 4 )
    {
        y2 = a4;
    }
    else if( y2 == 5 )
    {
        y2 = a5;
    }
    else if( y2 == 6 )
    {
        y2 = a6;
    }
    else if( y2 == 7 )
    {
        y2 = a7;
    }
    else if( y2 == 8 )
    {
        y2 = a8;
    }
    else if( y2 == 9 )
    {
        y2 = a9;
    }
    else if( y2 == 10 )
    {
        y2 = a10;
    }
    
    if ( y3 == 1 )
    {
        y3 = a1;
    }
    else if( y3 == 2 )
    {
        y3 = a2;
    }
    else if( y3 == 3 )
    {
        y3 = a3;
    }
    else if( y3 == 4 )
    {
        y3 = a4;
    }
    else if( y3 == 5 )
    {
        y3 = a5;
    }
    else if( y3 == 6 )
    {
        y3 = a6;
    }
    else if( y3 == 7 )
    {
        y3 = a7;
    }
    else if( y3 == 8 )
    {
        y3 = a8;
    }
    else if( y3 == 9 )
    {
        y3 = a9;
    }
    else if( y3 == 10 )
    {
        y3 = a10;
    }

    if ( y4 == 1 )
    {
        y4 = a1;
    }
    else if( y4 == 2 )
    {
        y4 = a2;
    }
    else if( y4 == 3 )
    {
        y4 = a3;
    }
    else if( y4 == 4 )
    {
        y4 = a4;
    }
    else if( y4 == 5 )
    {
        y4 = a5;
    }
    else if( y4 == 6 )
    {
        y4 = a6;
    }
    else if( y4 == 7 )
    {
        y4 = a7;
    }
    else if( y4 == 8 )
    {
        y4 = a8;
    }
    else if( y4 == 9 )
    {
        y4 = a9;
    }
    else if( y4 == 10 )
    {
        y4 = a10;
    }

    if ( y5 == 1 )
    {
        y5 = a1;
    }
    else if( y5 == 2 )
    {
        y5 = a2;
    }
    else if( y5 == 3 )
    {
        y5 = a3;
    }
    else if( y5 == 4 )
    {
        y5 = a4;
    }
    else if( y5 == 5 )
    {
        y5 = a5;
    }
    else if( y5 == 6 )
    {
        y5 = a6;
    }
    else if( y5 == 7 )
    {
        y5 = a7;
    }
    else if( y5 == 8 )
    {
        y5 = a8;
    }
    else if( y5 == 9 )
    {
        y5 = a9;
    }
    else if( y5 == 10 )
    {
        y5 = a10;
    }

    if ( y6 == 1 )
    {
        y6 = a1;
    }
    else if( y6 == 2 )
    {
        y6 = a2;
    }
    else if( y6 == 3 )
    {
        y6 = a3;
    }
    else if( y6 == 4 )
    {
        y6 = a4;
    }
    else if( y6 == 5 )
    {
        y6 = a5;
    }
    else if( y6 == 6 )
    {
        y6 = a6;
    }
    else if( y6 == 7 )
    {
        y6 = a7;
    }
    else if( y6 == 8 )
    {
        y6 = a8;
    }
    else if( y6 == 9 )
    {
        y6 = a9;
    }
    else if( y6 == 10 )
    {
        y6 = a10;
    }


    if ( y7 == 1 )
    {
        y7 = a1;
    }
    else if( y7 == 2 )
    {
        y7 = a2;
    }
    else if( y7 == 3 )
    {
        y7 = a3;
    }
    else if( y7 == 4 )
    {
        y7 = a4;
    }
    else if( y7 == 5 )
    {
        y7 = a5;
    }
    else if( y7 == 6 )
    {
        y7 = a6;
    }
    else if( y7 == 7 )
    {
        y7 = a7;
    }
    else if( y7 == 8 )
    {
        y7 = a8;
    }
    else if( y7 == 9 )
    {
        y7 = a9;
    }
    else if( y7 == 10 )
    {
        y7 = a10;
    }

    if ( y8 == 1 )
    {
        y8 = a1;
    }
    else if( y8 == 2 )
    {
        y8 = a2;
    }
    else if( y8 == 3 )
    {
        y8 = a3;
    }
    else if( y8 == 4 )
    {
        y8 = a4;
    }
    else if( y8 == 5 )
    {
        y8 = a5;
    }
    else if( y8 == 6 )
    {
        y8 = a6;
    }
    else if( y8 == 7 )
    {
        y8 = a7;
    }
    else if( y8 == 8 )
    {
        y8 = a8;
    }
    else if( y8 == 9 )
    {
        y8 = a9;
    }
    else if( y8 == 10 )
    {
        y8 = a10;
    }

    if ( y9 == 1 )
    {
        y9 = a1;
    }
    else if( y9 == 2 )
    {
        y9 = a2;
    }
    else if( y9 == 3 )
    {
        y9 = a3;
    }
    else if( y9 == 4 )
    {
        y9 = a4;
    }
    else if( y9 == 5 )
    {
        y9 = a5;
    }
    else if( y9 == 6 )
    {
        y9 = a6;
    }
    else if( y9 == 7 )
    {
        y9 = a7;
    }
    else if( y9 == 8 )
    {
        y9 = a8;
    }
    else if( y9 == 9 )
    {
        y9 = a9;
    }
    else if( y9 == 10 )
    {
        y9 = a10;
    }

    if ( y10 == 1 )
    {
        y10 = a1;
    }
    else if( y10 == 2 )
    {
        y10 = a2;
    }
    else if( y10 == 3 )
    {
        y10 = a3;
    }
    else if( y10 == 4 )
    {
        y10 = a4;
    }
    else if( y10 == 5 )
    {
        y10 = a5;
    }
    else if( y10 == 6 )
    {
        y10 = a6;
    }
    else if( y10 == 7 )
    {
        y10 = a7;
    }
    else if( y10 == 8 )
    {
        y10 = a8;
    }
    else if( y10 == 9 )
    {
        y10 = a9;
    }
    else if( y10 == 10 )
    {
        y10 = a10;
    }

    for ( int32_t i = 1 ; i <= y ; i++ )
    {
        if ( i == 1 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y1 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
        else if( i == 2 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y2 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
        else if( i == 3 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y3 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
        else if( i == 4 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y4 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
        else if( i == 5 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y5 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
        else if( i == 6 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y6 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
        else if( i == 7 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y7 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
        else if( i == 8 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y8 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
        else if( i == 9 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y9 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
        else if( i == 10 )
        {
            printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
            printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , y10 );
            printf( "  ＼ヽﾐ  三  彡 ソ\n" );
            printf( "     )ﾐ ､_  彡ノ\n" );
            printf( "    (ﾐ∪三∪彡\n" );
            printf( "     ＼ヾ丿ノ\n" );
            printf( "       ヽ ﾉ\n" );
            printf( "        )ﾉ\n" );
            printf( "       ((\n" );
            printf( "\n" );
        }
    }

    printf( "result: " );
    
    if ( y1 != 0 )
    {
        printf( "%d + " , y1 );
    }
    if ( y2 != 0 )
    {
        printf( "%d + " , y2 );
    }
    if ( y3 != 0 )
    {
        printf( "%d + " , y3 );
    }
    if ( y4 != 0 )
    {
        printf( "%d + " , y4 );
    }
    if ( y5 != 0 )
    {
        printf( "%d + " , y5 );
    }
    if ( y6 != 0 )
    {
        printf( "%d + " , y6 );
    }
    if ( y7 != 0 )
    {
        printf( "%d + " , y7 );
    }
    if ( y8 != 0 )
    {
        printf( "%d + " , y8 );
    }
    if ( y9 != 0 )
    {
        printf( "%d + " , y9 );
    }
    if ( y10 != 0 )
    {
        printf( "%d + " , y10 );
    }
    printf( "%d + " , b );
    printf( "\b\b" );
    printf( "= %d" , y1 + y2 + y3 + y4 + y5 + y6 + y7 + y8 + y9 + y10 + b );
}

void rollAdXkhHklLkcCB()
{
    int32_t a;
    int32_t x;
    int32_t h;
    int32_t l;
    int32_t c;
    int32_t b;
    int32_t a1 = 0;
    int32_t a2 = 0;
    int32_t a3 = 0;
    int32_t a4 = 0;
    int32_t a5 = 0;
    int32_t a6 = 0;
    int32_t a7 = 0;
    int32_t a8 = 0;
    int32_t a9 = 0;
    int32_t a10 = 0;

    printf( "Please enter A, X, H, L, C, B: " );
    scanf( "%d %d %d %d %d %d" , &a , &x , &h , &l , &c , &b );

    if ( a < 0 || a > 10 )
    {
        printf( "Error input A\n" );
        return;
    }
    if ( x < 2 || x > 100 )
    {
        printf( "Error input X\n" );
        return;
    }
    if ( b < -10 || b > 10 )
    {
        printf( "Error input B\n" );
        return;
    }
    if ( h < 0 || h > 10 )
    {
        printf( "Error input H\n" );
        return;
    }
    if ( l < 0 || l > 10 )
    {
        printf( "Error input L\n" );
        return;
    }
    if ( c < 0 || c > 10 )
    {
        printf( "Error input C0\n" );
        return;
    }

    printf( "\n" );

    srand( time( 0 ) );

    for ( int32_t i = 1 ; i <= a ; i++ )
    {
        int32_t dice = (rand() % x ) + 1;

        if ( i == 1 )
        {
            a1 = dice;
        }
        else if( i == 2 )
        {
            a2 = dice;
        }
        else if( i == 3 )
        {
            a3 = dice;
        }
        else if( i == 4 )
        {
            a4 = dice;
        }
        else if( i == 5 )
        {
            a5 = dice;
        }
        else if( i == 6 )
        {
            a6 = dice;
        }
        else if( i == 7 )
        {
            a7 = dice;
        }
        else if( i == 8 )
        {
            a8 = dice;
        }
        else if( i == 9 )
        {
            a9 = dice;
        }
        else if( i == 10 )
        {
            a10 = dice;
        }

        printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
        printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , dice );
        printf( "  ＼ヽﾐ  三  彡 ソ\n" );
        printf( "     )ﾐ ､_  彡ノ\n" );
        printf( "    (ﾐ∪三∪彡\n" );
        printf( "     ＼ヾ丿ノ\n" );
        printf( "       ヽ ﾉ\n" );
        printf( "        )ﾉ\n" );
        printf( "       ((\n" );
        printf( "\n" );
        
    }

}

void randomEvents()
{
    srand( time( 0 ) );
    
    int32_t event = rand() % 2 + 1;
    int32_t event2 = rand() % 3 + 1;

    if ( event == 1 )
    {
        printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
        printf( "((と(ﾟДﾟ\x1b[46m1ﾟ\x1b[0mДﾟ)つ))\n");
        printf( "  ＼ヽﾐ  三  彡 ソ\n" );
        printf( "     )ﾐ ､_  彡ノ\n" );
        printf( "    (ﾐ∪三∪彡\n" );
        printf( "     ＼ヾ丿ノ\n" );
        printf( "       ヽ ﾉ\n" );
        printf( "        )ﾉ\n" );
        printf( "       ((\n" );
        printf( "\n" );

        printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
        printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , event2 );
        printf( "  ＼ヽﾐ  三  彡 ソ\n" );
        printf( "     )ﾐ ､_  彡ノ\n" );
        printf( "    (ﾐ∪三∪彡\n" );
        printf( "     ＼ヾ丿ノ\n" );
        printf( "       ヽ ﾉ\n" );
        printf( "        )ﾉ\n" );
        printf( "       ((\n" );
        printf( "\n" );

        if ( event2 == 1 )
        {
            printf( "Weather Event. It's sunny now.\n" );
        }
        else if ( event2 == 2 )
        {
            printf( "Weather Event. It's rainy now.\n" );
        }
        else if ( event2 == 3 )
        {
            printf( "Weather Event. It's snowy now.\n" );
        }
    }
    if ( event == 2 )
    {
        printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
        printf( "((と(ﾟДﾟ\x1b[46m2ﾟ\x1b[0mДﾟ)つ))\n");
        printf( "  ＼ヽﾐ  三  彡 ソ\n" );
        printf( "     )ﾐ ､_  彡ノ\n" );
        printf( "    (ﾐ∪三∪彡\n" );
        printf( "     ＼ヾ丿ノ\n" );
        printf( "       ヽ ﾉ\n" );
        printf( "        )ﾉ\n" );
        printf( "       ((\n" );
        printf( "\n" );

        printf( "ﾉ\"′∧∧∧∧、ヽ､\n" );
        printf( "((と(ﾟДﾟ\x1b[46m%dﾟ\x1b[0mДﾟ)つ))\n" , event2 );
        printf( "  ＼ヽﾐ  三  彡 ソ\n" );
        printf( "     )ﾐ ､_  彡ノ\n" );
        printf( "    (ﾐ∪三∪彡\n" );
        printf( "     ＼ヾ丿ノ\n" );
        printf( "       ヽ ﾉ\n" );
        printf( "        )ﾉ\n" );
        printf( "       ((\n" );
        printf( "\n" );

        if ( event2 == 1 )
        {
            printf( "Treasure Event. You are rich now.\n" );
        }
        else if ( event2 == 2 )
        {
            printf( "Treasure Event. This is a trap.\n" );
        }
        else if ( event2 == 3 )
        {
            printf( "Treasure Event. There is nothing.\n" );
        }
    }
    

}




