#include <stdio.h>
void runMenu()
{
    int foodType = 0, itemNumber = 0;
    puts("What would you like to have Veg:1, NonVeg:2. Your choice please");
    scanf("%d", &foodType);
    do
    {
        switch(foodType)
        {
            case 1 : puts("1:DB-Dosa, 2:ChowChowBath 3:Idly-Vada 4:BB-Bath. Your choice please."); 
            scanf("%d", &itemNumber);
            switch(itemNumber)
            {
                case 1 : puts("Yummy Davanagere Benne Dosa Maam"); break;
                case 2 : puts("Yummy ChowChowBath Maam"); break;
                case 3 : puts("Yummy Idly-Vada Maam"); break;
                case 4 : puts("Yummy BisiBeleBath Maam"); break;
                default: puts("Sorry we dont serve you choice of food");
            } break;

            case 2 : puts("1:Fish fry, 2:Chicken Biryani 3:Mutton Biryani 4:Egg fry. Your choice please.");
            scanf("%d", &itemNumber);
            switch(itemNumber)
            {
                case 1 : puts("Yummy Fish fry Maam"); break;
                case 2 : puts("Yummy Chicken Biryani Maam"); break;
                case 3 : puts("Yummy Mutton Biryani Maam"); break;
                case 4 : puts("Yummy Egg fry Maam"); break;
                default: puts("Sorry we dont serve you choice of food");
            } break;
            default: puts("This is Restaurant, not Garder. Please Order an item.");
        }
        puts("Do you wish to have more? Yes:1 No:Any number");
        scanf("%d", &itemNumber);
    }
    while(itemNumber == 1);
}