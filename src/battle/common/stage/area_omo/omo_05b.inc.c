#include "battle/battle.h"
#include "mapfs/omo_bt05_shape.h"

#define NAMESPACE A(omo_05b)

EvtScript N(EVS_PreBattle) = {
    Call(SetSpriteShading, SHADING_NONE)
    Call(SetCamBGColor, CAM_BATTLE, 0, 0, 0)
    Call(SetGroupVisibility, MODEL_g2, MODEL_GROUP_HIDDEN)
    Call(SetGroupVisibility, MODEL_dai2, MODEL_GROUP_HIDDEN)
    Return
    End
};

EvtScript N(EVS_PostBattle) = {
    Return
    End
};

s32 N(ForegroundModels)[] = {
    MODEL_mae2,
    STAGE_MODEL_LIST_END
};

Stage NAMESPACE = {
    .texture = "omo_tex",
    .shape = "omo_bt05_shape",
    .hit = "omo_bt05_hit",
    .bg = "omo_bg",
    .preBattle = &N(EVS_PreBattle),
    .postBattle = &N(EVS_PostBattle),
    .foregroundModelList = N(ForegroundModels),
};
