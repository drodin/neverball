#ifndef HUD_H
#define HUD_H

/*---------------------------------------------------------------------------*/

void hud_init(void);
void hud_free(void);

void hud_paint(void);
void hud_timer(float);
void hud_update(int);

void hud_cam_pulse(int);
void hud_cam_timer(float);
void hud_cam_paint();

void hud_speed_pulse(int);
void hud_speed_timer(float);
void hud_speed_paint();

#ifdef __MOBILE__
void hud_mobile_init(void);
void hud_mobile_free(void);

void hud_mobile_paint(void);

int hud_mobile_point(int x, int y);
int hud_mobile_click(void);
#endif

/*---------------------------------------------------------------------------*/

#endif
