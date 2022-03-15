#include<stdio.h>
#include<math.h>

static int length, key_length;

int *fill_all_array(int input[], int length);
int *swapping(int input[]);
void check_overflow(int input[], int i);
void check_underflow(int input[], int i);



int main(){
    static char character_array[50];
    int array[50];
    int *new_array1, *new_array;

    static char secret[10];
    int key[10];

    int extra = 0;
    int sum_secret = 0;

    length = 50;
    key_length = 10;
    int counter = 0;


    //take input from user about it
    printf("Tell me your secret message to encrypt: ");
    fgets(character_array, length, stdin);

    printf("\n\nWhat is the secret key? ");
    fgets(secret, key_length, stdin);

    for(int i = 0; i< length; i++){
        array[i] = character_array[i];
    }
    for(int i = 0; i < key_length; i++){
        key[i] = secret[i];
    }
    //check if all the elements are filled if not fill with numbers
    new_array1 = fill_all_array(array, length);

    new_array = swapping(new_array1);

    //adding 3 to all elements
    for(int i = 0; i < length; i++){
        new_array[i] += 3;
        check_overflow(new_array, i);
    }

    //using secret keys now it gets crazy
    for(int i = 0; i < length; i++){
            if( i % 2 != 0){
                new_array[i] = new_array[i] - key[counter];
                counter++;
                if(i % key_length == 0){
                    counter = 0;
                }
                check_underflow(new_array, i);
            }
            else{
                new_array[i] = new_array[i] + key[counter];
                counter++;
                if(i % key_length == 0){
                    counter = 0;
                }
                check_overflow(new_array, i);
            }

    }

    //sum of secret key
    for(int i = 0; i < key_length; i++){
        sum_secret += key[i];
    }

    for(int i = 0; i< length ; i++){
        new_array[i] += sum_secret;
        check_overflow(new_array, i);
    }

    printf("\nThe encrypted message is:\n");
    for(int i = 0; i < length; i++){
        printf("%c", new_array[i]);
    }


    return 0;
}

int *swapping(int input[]){
    int buffer[length];
    for(int i = 0; i <length; i++){
        buffer[i] = input[i];
    }
    for(int i = 0; i < length; i+= 2){
        input[i] = buffer[i + 1];
        input[i + 1] = buffer[i];
    }
    return input;
}

void check_overflow(int input[], int i){
    int extra = 0;
    if( input[i] > 126){
            extra = input[i] - 126;
            extra += 63;
            input[i] = extra;
    }
    if( input[i] > 126){
        check_overflow(input, i);
    }
}

void check_underflow(int input[], int i){
    static int extra = 0;
    if(input[i] < 64){
        extra = 64 - input[i];
        extra = 127 - extra;
        input[i] = extra;
    }
    if( input[i] < 64 ){
        check_overflow(input, i);
    }
}

int *fill_all_array( int input[], int length){
    for(int i = 0; i < length; i++){
        if(input[i] == 0){
            input[i] =  60 + i;
            check_overflow(input, i);
        }
    }
    return input;
}
