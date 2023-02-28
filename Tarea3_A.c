#include <stdio.h>
int main() {
    int cantidad;
    int tiendas;
    scanf("%i", &cantidad);
    int n = 0;
    while (n < cantidad) {
        scanf("%i",&tiendas);
        int ctiendas[200];
        int i = 0;
        while (i < tiendas) {
            scanf("%i", &ctiendas[i]);
            i++;
        }
        int maximo = ctiendas[0];
        int minimo = ctiendas[0];
        int r = 0;
        while (r < tiendas) {
            if (ctiendas[r] < minimo) {
                minimo = ctiendas[r];
            }
            if (ctiendas[r] > maximo) {
                maximo = ctiendas[r];
            }
            r++;
        }
        int ans;
        int form = (maximo - minimo)*2;
        ans = form;
        printf("%i\n",ans);
        n++;
    }
    return 0;
}