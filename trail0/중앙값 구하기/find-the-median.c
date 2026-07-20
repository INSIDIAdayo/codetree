#include <stdio.h>

int main() {
    int a, b, c;

	    scanf("%d %d %d", &a, &b, &c);

		    if(a > b) {
			        if(c > a) {
					            printf("%d\n", a);
								        }
										        else if(b > c) {
												            printf("%d\n", b);
															        }
																	        else {
																			            printf("%d\n", c);
																						        }
																								    }
																									    else {
																										        if(c > b) {
																												            printf("%d\n", b);
																															        }
																																	        else if(a > c) {
																																			            printf("%d\n", a);
																																						        }
																																								        else {
																																										            printf("%d\n", c);
																																													        }
																																															    }

																																																    return 0;
																																																	}