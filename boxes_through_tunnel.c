/*Contributer Name:Ankit Prasad
  Date:15th september  2019
  All copyrights: www.aptechnoservices.com © 2019
*/



#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	int length,width,height;
    /**
	* Define three fields of type int: length, width and height
	*/
};

typedef struct box box;

int get_volume(box b) {
    return (b.height*b.length*b.width);
	/**
	* Return the volume of the box
	*/
}

int is_lower_than_max_height(box b) {
    if(b.height<MAX_HEIGHT)
        return 1;
    return 0;
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}