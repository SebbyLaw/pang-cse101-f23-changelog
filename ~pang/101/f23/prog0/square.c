#include <cairo.h>

int
main (int argc, char *argv[])
{
        cairo_surface_t *surface = cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 512, 512 );
        cairo_t *cr              = cairo_create (surface);

	// process command line input per specification
	  
	// default is black background.  set background to white.
	// set pen to black

	// top left corner -- green X on black background
	// default background is black

	cairo_set_source_rgb (cr, 0, 1, 0);		// green
	cairo_move_to (cr, 0, 0);			// top left corner
	cairo_line_to (cr, 256, 256);			// middle of the image
	cairo_move_to (cr, 256, 0);
	cairo_line_to (cr, 0, 256);
	cairo_set_line_width (cr, 10.0);
	cairo_stroke (cr);

	// bottom left corner -- white box on blue background using
	// coordinate specification

	cairo_set_source_rgb (cr, 0, 0, 1);		// blue
	cairo_rectangle (cr, 0, 255, 255, 255);
	cairo_fill (cr);

	cairo_move_to (cr, 0,   255);
	cairo_line_to (cr, 255, 255);
	cairo_line_to (cr, 255, 511);
	cairo_line_to (cr, 0,   511);
	cairo_close_path (cr);

	cairo_set_source_rgb (cr, 1, 1, 1);		// white
	cairo_set_line_width (cr, 8.0);
	cairo_stroke(cr);

	// bottom right corner -- red box on white background using
	// relative line drawing

	cairo_set_source_rgb (cr, 1, 1, 1);		// white
	cairo_rectangle (cr, 256, 256, 511, 511);
	cairo_fill (cr);

	cairo_move_to (cr, 256, 256);
	cairo_rel_line_to (cr, 256, 0);
	cairo_rel_line_to (cr, 0, 256);
	cairo_rel_line_to (cr, -256, 0);
	cairo_close_path (cr);

	cairo_set_source_rgb (cr, 1, 0, 0);		// red
	cairo_set_line_width (cr, 5.5);
	cairo_stroke(cr);

	// send output to png file
        cairo_destroy (cr);
        cairo_surface_write_to_png (surface, "square.png");
        cairo_surface_destroy (surface);
        return 0;
}
