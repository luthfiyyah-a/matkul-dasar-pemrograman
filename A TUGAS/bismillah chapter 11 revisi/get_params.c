#include "library.h"

/*
 * Prompts the user to enter the search parameters
 */

search_params_t
 get_params(void){
 /* body of get_params to be inserted */

    search_params_t params = {
    	.low_stock = 1, 
		.high_stock = 9,
    	.low_category = "aaaa", 
		.high_category = "zzzz",
    	.low_tech_descript = "aaaa", 
		.high_tech_descript = "zzzz",
    	.low_price = 0.0, 
		.high_price = 1000.0
	};
	
	char choice;
	choice = menu_choose(&params);
	
	do{
        if(choice=='q') break;
        if(choice=='a'){
	        printf("New low bound for stock>");
	        scanf("%d",&params.low_stock);
        }
        if(choice=='b'){
            printf("New high bound for stock>");
            scanf("%d",&params.high_stock);
        }
        if(choice=='c'){
            printf("New low bound for category>");
            scanf("%s",params.low_category);
        }
        if(choice=='d'){
            printf("New high bound for category>");
            scanf("%s",params.high_category);
        }
        if(choice=='e'){
            printf("New low bound for tech description>");
            scanf("%s",params.low_tech_descript);
        }
        if(choice=='f'){
            printf("New high bound for tech description>");
            scanf("%s",params.high_tech_descript);
        }
        if(choice=='g'){
            printf("New low bound for price>");
            scanf("%lf",&params.low_price);
        }
        if(choice=='h'){
            printf("New high bound for price>");
            scanf("%lf",&params.high_price);
        }
        choice = menu_choose(&params);
    }while(choice!='q');
	
	return params;
 }
 
