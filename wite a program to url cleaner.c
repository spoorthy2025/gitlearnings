#include <stdio.h>
#include <string.h>
void cleanURL(char *url) {
    char *ptr = strchr(url, '?');

    if (ptr != NULL) {
        *ptr = '\0';
    }
}

int main() {
    char url[] = "https://example.com/page?id=123&token=abc&source=news";

    printf("Original URL: %s\n", url);

    cleanURL(url);

    printf("Cleaned URL:  %s\n", url);

    return 0;
}
