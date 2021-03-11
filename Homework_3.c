#include <stdio.h>
#define true 1          //para este proyecto puede verificar si funciona poniendo el siguiente texto
#define false 0         //en la pantalla negra -> hola!, como estas?

int main(){
    int c, number = 0, parenthesis = 0, quotes = 0; //declaro el contador
    while((c=getchar()) !=EOF) {
        switch (c){
    case '[':
        parenthesis = 1;
        putchar(c);
        break;
        case ']':
            parenthesis = 0;
            putchar(c);
            break;
                case '(':
                    parenthesis = 1;
                    putchar(c);
                    break;
                case ')':
                    parenthesis = 0;
                    putchar(c);
                    break;
                case '{':
                    parenthesis = 1;
                    putchar(c);
                    break;   
                case '}':
                    parenthesis = 0;
                    putchar(c);
                    break;
            case '<':
                parenthesis = 1;
                putchar(c);
                break;
            case '>':
                parenthesis = 0;
                putchar(c);
                break;
        case '\"':
            putchar(c);
            quotes++;
            break;
    case '\'':
        putchar(c);
        quotes++;
        break;

    default:
        if(c!='.'&&c!=':'&&c!='\?'&&c!='!'&&c!='-'&&c!=';'&&c!='_'){
            if (parenthesis==1||quotes==1){
                putchar (c);
        }
        else{
            if (quotes==2){
                quotes=0;
            }
            if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0'){
               number++;
               }else{
                number = 0;
               }
               if (number==1){
                   putchar ('x');
               }
               if (number==0){
                putchar (c);
               }
            }
        }
    }

}
return 0;
}
//Me gustaria dar creditos a Angel Raul por la ayuda brindada en este codigo