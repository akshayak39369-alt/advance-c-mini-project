#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    int choice;
    int x1, y1, x2, y2, r;

    initgraph(&gd, &gm, "");

    do
    {
        printf("\n--- 2D Graphics Editor ---\n");
        printf("1. Draw Line\n");
        printf("2. Draw Rectangle\n");
        printf("3. Draw Circle\n");
        printf("4. Clear Screen\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter x1 y1 x2 y2: ");
                scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
                line(x1, y1, x2, y2);
                break;

            case 2:
                printf("Enter top-left and bottom-right coordinates: ");
                scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
                rectangle(x1, y1, x2, y2);
                break;

            case 3:
                printf("Enter center (x y) and radius: ");
                scanf("%d%d%d", &x1, &y1, &r);
                circle(x1, y1, r);
                break;

            case 4:
                cleardevice();
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    getch();
    closegraph();
    return 0;
}
