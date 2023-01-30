#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

#include "Math.h"

#ifndef _ENUMS_H
#define _ENUMS_H
enum ANIMACAO_JOGADOR {PARADO,CORRENDO, INI_CORRIDA, VIRANDO_C, PARANDO,DANO,ATAQUE_1,ATAQUE_2,ATAQUE_A_2
,ATAQUE_D,ATAQUE_A,ATAQUE_A_CI,ATAQUE_C,PULANDO,CAINDO, MORRENDO, ABAIXANDO, ABAIXADO,
LEVANTANDO, C_ESQUIVA, ESQUIVA, MORTE
                      };
enum COLISOES { COLIDE_Y, COLIDE_XD, COLIDE_XE};
enum KEYS {UP, LEFT, DOWN, RIGHT, Z, X, C, V, W, A, S, D, F, G, H, J};
enum ESTADO_JOGO {MENU, PLAY, LOADING, PAUSE, GAMEOVER, CREDITS, FECHA};
enum ESTADOS_ESQUELETO {ESQ_PARADO,ESQ_ANDANDO,ESQ_ATAQUE_LONGO,ESQ_ATAQUE_PERTO,ESQ_DANO,ESQ_MORRENDO,
                        ESQ_PULANDO,ESQ_CAINDO,ESQ_RENASCENDO
                       };
enum ESTADOS_MORCEGO {MOR_PARADO,MOR_ANDANDO,MOR_RASANTE_DESCENDO, MOR_RASANTE_SUBINDO,MOR_DANO,MOR_MORRENDO,MOR_MORTO};
enum ESTADOS_SLIME {SLI_PARADO,SLI_ANDANDO,SLI_COMECA_PULO,SLI_PULANDO_RAPIDO,SLI_PULANDO_DEVAGAR,
                    SLI_CAINDO_PULO,SLI_DANO,SLI_MORRENDO,SLI_CAINDO_PLAT
                   };
enum ESTADOS_BESOURO {BES_PARADO, BES_VOANDO, BES_DANO,BES_MORRENDO};
enum ESTADOS_NECROMANTE {NEC_PARADO, NEC_VOANDO,NEC_CONJURANDO, NEC_DANO, NEC_COMECA_MORTE,NEC_MORRENDO};
enum ESTADOS_GOBLIN {GOB_PARADO, GOB_ANDANDO, GOB_ATACANDO, GOB_DANO, GOB_MORRENDO,GOB_PULANDO,GOB_CAINDO};
enum ESTADOS_FOGO {FOG_PARADO, FOG_ANDANDO,FOG_DANO, FOG_MORRENDO};
enum ESTADOS_GOLEM {GOL_PARADO, GOL_ANDANDO, GOL_ATAQUE, GOL_MORRENDO};
enum ESTADOS_CHEFAO {CHE_VOANDO, CHE_ATACANDO, CHE_DANO, CHE_COMECA_CONJURACAO, CHE_CONJURANDO,
                CHE_TERMINA_CONJURACAO, CHE_DASH, CHE_MORRENDO};
enum ATAQUES_CHEFAO {COLUNA,ONDA,CHUVA,DASH};
enum ENTITIES_CLASS {PLATFORM, PLAYER, ENEMY, PLAYER_ATTACK, ENEMY_ATTACK, EFFECTS, OBSTACLE};

const int NUM_COLISOES = 3;
const int NUM_KEYS = 16;
const float PI = 3.1415926;
const int NUM_ESTADOS = 22;
const int NUM_TECLAS_JOGADOR = 8;
const int FPS = 60;
/*for(int i = 0; i < 720; i++)
{
    sen[i] = sin((i/2.0)*(PI/180));
    cos[i] = cos((i/2.0)*(PI/180));
}*/
#endif // _ENUMS_H

