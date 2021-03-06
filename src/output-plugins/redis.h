/*
** Copyright (C) 2018-2020 Quadrant Information Security <quadrantsec.com>                          ** Copyright (C) 2018-2020 Champ Clark III <cclark@quadrantsec.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

void Redis_Connect( void );
void Redis_Reader ( char *redis_command, char *str, size_t size );
bool Redis_Writer ( char *command, char *key, char *value, int expire );
void JSON_To_Redis ( char *json_string, char *key );
void Alert_To_Redis ( struct _DecodeAlert *DecodeAlert, char *json_string );



