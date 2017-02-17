
#include <allegro5/allegro.h>u
#include <allegro5/allegro_primitives.h>
int main() {


	
	ALLEGRO_DISPLAY *display = NULL;

		al_init();

		al_init_primitives_addon();

		display = al_create_display(640, 480);
		al_clear_to_color(al_map_rgb(0, 0, 0));
		al_draw_triangle(100, 200, 200, 300, 100, 150, al_map_rgb(200, 0, 0),5);

	
	
		al_draw_triangle(160, 270, 550, 490, 10, 260, al_map_rgb(0, 240, 0), 5);

		al_flip_display();

		al_rest(10.0);



	}
		