#define SIZE_OF_THE_STRING 100

char THE_STRING[SIZE_OF_THE_STRING];

char GIVEN_STRING[SIZE_OF_THE_STRING];


#ifdef STORAGE_CLASS
#define STORAGE_CLASS static
#else
#define STORAGE_CLASS extern
#endif

typedef struct string_parser{
    int pos;
    int tokens;
    int tokens_array;
}string_parser;

typedef struct types{
    STRING=1;
    PRIMITIVE=2;
}typ;


/*------------------------------------------------------------------------------------------------------------------------
//Done functions
------------------------------------------------------------------------------------------------------------------------*/
void parser_initialization(string_parser *parser){
    parser->pos=0;
    parser->tokens=1;
    parser->tokens_array=1;
}


//-----------------------------------------------------------------------------------------------------------------------------
void find_the_type(const char*GIVEN_STRING){

        c=GIVEN_STRING[0];
        switch(c){
            case 'T':
            type=PRIMITIVE;
                break;
            case 'F':
            type=PRIMITIVE;
                break;
            case 't':
            type=PRIMITIVE;
                break;
            case 'f':
            type=PRIMITIVE;
                break;
            case '0':
            type=PRIMITIVE;
                break;
            case '1':
            type=PRIMITIVE;
                break;
            case '2':
            type=PRIMITIVE;
                break;
            case '3':
            type=PRIMITIVE;
                break;
            case '4':
            type=PRIMITIVE;
                break;
            case '5':
            type=PRIMITIVE;
                break;
            case '6':
            type=PRIMITIVE;
                break;
            case '7':
            type=PRIMITIVE;
                break;
            case '8':
            type=PRIMITIVE;
                break;
            case '9':
            type=PRIMITIVE;
                break;
            default:type=STRING;
            break;
        }
        return type;
}
//--------------------------------------------------------------------------------------------------------------------

STORAGE_CLASS char string_fill(string_parser *parser,char *js,const char *GIVEN_STRING){
    js[parser->pos++]='{';

        unsigned char type=find_the_type(GIVEN_STRING);

            if(type==STRING && (parser->tokens)%2!=0){
                js[parser->pos++]='\"';
                    
                    for(;GIVEN_STRING!='\0',parser->pos++){
                        js[parser->pos++]=*GIVEN_STRING;
                        GIVEN_STRING++;
                    }
                    js[parser->pos++]='\"';
                    parser->tokens++;
                    add_characters(parser,js); //TO ADD : AND LEAVE ONE SPACE.
                    return(parser->tokens);
            }
            else{
                    for(;GIVEN_STRING!='\0',parser->pos++){
                        js[parser->pos++]=*GIVEN_STRING;
                        GIVEN_STRING++;
                    }
                        parser->tokens++;
                        add_characters(parser,js);
                        return(parser->tokens);
                    }
            
    }
    //----------------------------------------------------------------------------------------------------------------------------

    void add_characters(string_parser *parser,char *js){
        if(((parser->tokens)%2!=0)){
        js[parser->pos++]=':';
        js[parser->pos++]=' ';
        }
        else{
            js[parser->pos++]=',';

            if(parser->tokens==6){              //THIS IS TO ADD NEW LINE CHARACTER.
                js[parser->pos++]='\n';
                js[parser->pos++]=' ';
                js[parser->pos++]=' ';
                js[parser->pos++]='"';
                js[parser->pos++]='"';
            }
        }
    }

//-------------------------------------------------------------------------------------------------------------------------------

STORAGE_CLASS array_fill(&p,char *js,const char*GIVEN_STRING){
    js[parser->pos++]='[';
    js[parser->pos++]='\"';

        for(;GIVEN_STRING!='\0',parser->pos++){
            js[parser->pos++]=*GIVEN_STRING;
            GIVEN_STRING++;
            return(parser->tokens_array);
        }
        parser->pos++;       //Inc the parser to fill the next values
        js[parser->pos++]=',';
        js[parser->pos++]=' ';
        parser->tokens_array++;

            if(tokens_array==4){
                js[parser->pos++]=']';
                js[parser->pos++]='}';
                js[parser->pos]='\0';
            }
        }
    //-----------------------------------------------------------------------------------------------------------------------

    //MAIN Function
    #include<stdio.h>
int main(){

    char temp=1;
    string_parser p;

    parser_initialization(&p);



    while(temp!=7){
        scanf("%s",GIVEN_STRING);
        temp=string_fill(&p,THE_STRING,GIVEN_STRING);
    }
    
    while(temp!=4){
        scanf("%s",GIVEN_STRING);
        temp=array_fill(&p,THE_STRING,GIVEN_STRING);
    }
}

//----------------------------------------------------------------------------------------------------------------------
