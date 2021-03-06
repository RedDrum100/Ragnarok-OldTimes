// Copyright (c) Athena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _INT_PET_H_
#define _INT_PET_H_

int inter_pet_init();
void inter_pet_final();
int inter_pet_save();
int inter_pet_delete(int pet_id);

int inter_pet_parse_frommap(int fd);

extern char pet_txt[1024];

#endif
