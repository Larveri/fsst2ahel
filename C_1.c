#include <stdio.h>                      // stdio = standard input output // include: mach etwas dazu rein

int main(int argc, char* argv[])        // ohne main kann der code nicht kompiliert werden // es gibt immer ein main // argc: counter // argv: values // diese zeile ist eine funktion
{
    printf("Hello %s\n", argv[4]);      // print "Hello (und das 4.te wort von argv -> argv[4]) // "\n" heißt: new line character
    return 123;                         //rückgabewert heißt exit code
};

//pre-processor ließt das zeug/den code durch
//.exe: ausführbare datei

//{
    //printf("Hello %s\n", argv[4]);      // das ist ein block wegen die welligen klammern: "{}"
    //return 123;                         
//};

//main heißt main weil es die hauptfunktion ist