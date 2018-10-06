//
//  main.c
//  Module-3-Text
//
//  Created by Kamal Maged on 2018-10-06.
//  Copyright © 2018 Kamal Maged. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char text[] = "";
    printf("Enter a sentence\n");
    scanf("%[^\n]s", text);
    printf("%s", text);
    printf("\n%lu", strlen(text));
    
    return 0;
}

