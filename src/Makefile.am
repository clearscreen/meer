ACLOCAL_AMFLAGS = -I m4

AUTOMAKE_OPIONS=foreign no-dependencies subdir-objects

                bin_PROGRAMS = meer
                               meer_CPPFLAGS = -I$(top_srcdir) $(LIBFASTJSON_CFLAGS) $(LIBESTR_CFLAGS)
                                       meer_LDADD = $(LIBFASTJSON_LIBS) $(LIBLOGNORM_LIBS) $(LIBESTR_LIBS)

                                               meer_SOURCES = meer.c \
							      config-yaml.c \
							      util.c \
							      util-strlcpy.c \
							      util-strlcat.c \
							      util-signal.c \
							      util-base64.c \
							      lockfile.c \
							      stats.c \
							      waldo.c \
							      output.c \
							      classifications.c \
							      references.c \
							      sid-map.c \
							      usage.c \
							      oui.c \
							      fingerprint.c \
							      decode-json.c \
							      decode-json-alert.c \
							      decode-json-dhcp.c \
							      decode-output-json-client-stats.c \
							      output-plugins/sql.c \
							      output-plugins/mysql.c \
							      output-plugins/postgresql.c \
							      output-plugins/external.c \
							      output-plugins/redis.c \
							      output-plugins/fingerprint.c \
							      output-plugins/quadrant.c


                                                       install-data-local:

