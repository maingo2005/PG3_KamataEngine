#include "Sounds.h"

void Initialize(){
	titleAudioHandle = Novice::LoadAudio("./Resources/Sounds/Tbgm.mp3");
	titlePlayHandle = -1;

	stageAudioHandle = Novice::LoadAudio("./Resources/Sounds/Sbgm.mp3");
	stagePlayHandle = -1;

	overAudioHandle = Novice::LoadAudio("./Resources/Sounds/Tbgm.mp3");
	overPlayHandle = -1;

	clearAudioHandle = Novice::LoadAudio("./Resources/Sounds/Tbgm.mp3");
	clearPlayHandle = -1;
}

void TitleAudio(){
	if (!Novice::IsPlayingAudio(titlePlayHandle)) {
		titlePlayHandle = Novice::PlayAudio(titleAudioHandle, false, 0.5f);
	}
}

void StageAudio(){
	Novice::StopAudio(titlePlayHandle);
	if (!Novice::IsPlayingAudio(stagePlayHandle)) {
		stagePlayHandle = Novice::PlayAudio(stageAudioHandle, false, 0.5f);
	}
}

void OverAudio(){
	Novice::StopAudio(stagePlayHandle);
	if (!Novice::IsPlayingAudio(overPlayHandle)) {
		overPlayHandle = Novice::PlayAudio(overAudioHandle, false, 0.5f);
	}
}

void ClearAudio(){
	Novice::StopAudio(stagePlayHandle);
	if (!Novice::IsPlayingAudio(clearPlayHandle)) {
		clearPlayHandle = Novice::PlayAudio(clearAudioHandle, false, 0.5f);
	}
}
