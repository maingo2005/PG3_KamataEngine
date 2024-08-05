#pragma once
#include <Novice.h>

int titleAudioHandle;
int titlePlayHandle;

int stageAudioHandle;
int stagePlayHandle;

int overAudioHandle;
int overPlayHandle;

int clearAudioHandle;
int clearPlayHandle;

void Initialize();
void TitleAudio();
void StageAudio();
void OverAudio();
void ClearAudio();