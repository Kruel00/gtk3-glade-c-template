
#include "version.h"
#include "data.h"
#include <gtk/gtk.h>



int main(int argc, char* argv[])
{
        if (argc >= 2) {
                if (0 == strcmp(argv[1], "--version"))
                        version();
        }

        GtkBuilder* builder;
        GtkWidget*  window;

        gtk_init(&argc, &argv);

        builder = gtk_builder_new_from_resource(APP_PREFIX"/window_main.glade");

        window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
        gtk_builder_connect_signals(builder, NULL);

        g_object_unref(builder);

        gtk_widget_show(window);
        
        gtk_main();
        return 0;
}

void on_window_main_destroy()
{
        gtk_main_quit();
}


