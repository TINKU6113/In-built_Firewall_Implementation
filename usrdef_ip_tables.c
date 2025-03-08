#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char *command = "sudo iptables -D INPUT -p tcp --dport 80 -j ACCEPT";
    int status = system(command);

    if (status == -1) {
        printf("Failed to add firewall rule.\n");
        return 1;
    } else {
        printf("Firewall rule added successfully.\n");
    }

    return 0;
}

