#ifndef DICEGAME_H
#define DICEGAME_H

typedef enum ROUNDTYPE
{
    BONUS,DOUBLE,REGULAR
} ROUNDTYPE;



ROUNDTYPE getRoundType();
int getRandomNumber( int min, int max );
int getRoundPoints( ROUNDTYPE roundType );
void printPlayerPoints( int P1, int P2 );
void printRoundInfo( ROUNDTYPE t, int die, int pointAdder );

#endif
