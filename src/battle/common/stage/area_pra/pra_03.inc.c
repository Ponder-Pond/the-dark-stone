#include "battle/battle.h"
#include "mapfs/pra_bt03_shape.h"

#define NAMESPACE A(pra_03)

EvtScript N(EVS_PreBattle) = {
    Call(SetSpriteShading, SHADING_NONE)
    Call(SetCamBGColor, CAM_BATTLE, 0, 0, 0)
    Return
    End
};

EvtScript N(EVS_PostBattle) = {
    Return
    End
};

Stage NAMESPACE = {
    .texture = "pra_tex",
    .shape = "pra_bt03_shape",
    .hit = "pra_bt03_hit",
    .preBattle = &N(EVS_PreBattle),
    .postBattle = &N(EVS_PostBattle),
};
