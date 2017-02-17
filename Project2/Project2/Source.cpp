#include <stdio.h>
#include <allegro5/allegro.h>

int main()
{
	ALLEGRO_DISPLAY *display = NULL;

	al_init();
		

	display = al_create_display(640, 480);


	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_flip_display();

	al_rest(10.0);

	al_destroy_display(display);

	return 0;
}