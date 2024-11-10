#include <stdio.h>
#include <stdlib.h>

int main() {
    long long leftcost, rightcost;
   
    while (1) {
        // ektipwnw auto gia na grapsei o xristis to costos tou aristerou
        printf("enter the left cost: ");
        if (scanf("%lld", &leftcost) == EOF) {
            // tha termatizei kai tha dinei timi 0 an dothei to EOF (Ctrl+D)
             printf("Terminating.\n");
             return 0;
        }

        // protroph gia na grapsei o xristis to kostos tou deksiou
        printf("enter the right cost: ");
        // elegxos eisodou timhs
        if (scanf("%lld", &rightcost) != 1) {
            // tha termatizei me timi 1 ama dothei input ektos prodiagraphwn
             // akyrh eisodos - Termatismos me kwdiko exodoy 1
            printf("No right cost provided.\n");
            return 1;
        }

        // sygkrinw tis times left kai right cost kai typwnw to swsto apotelesma
        if (leftcost <= rightcost) {
            printf("Go left\n");
        } else {
            printf("Go right\n");
        }
    }
    return 0;
}
