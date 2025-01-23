#include <stdio.h>
#include <stdlib.h>

int main() {
	char buf[101];
	int idx = 0;
	int lcount = 0;
	int counted = -1;

	while ((buf[idx] = fgetc(stdin))) {
		if (lcount == 0 && buf[idx] == '\n') {
			buf[idx] = '\0';
			lcount = atoi(buf);
			counted = 0;
			idx = 0;
			continue;
		}
		if (buf[idx] == '\n' || buf[idx] == EOF) {
			buf[idx] = '\0';
			if (idx > 10) {
				fprintf(stdout, "%c%d%c\n", buf[0], idx-2, buf[idx-1]);
			} else {
				fprintf(stdout, "%s\n", buf);
			}
			idx = 0;
			counted++;
			if (counted >= lcount) {
				break;
			}
			continue;
		}
		if (counted >= lcount) {
			break;
		}
		if (buf[idx] == EOF) {
			break;
		}
		idx++;
	}
	return 0;
}
