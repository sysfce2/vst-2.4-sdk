//-------------------------------------------------------------------------------------------------------
//  MisEfx.h
//
//  Created by Marco Bertola on 02/06/2020.
//
//-------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include "public.sdk/source/vst2.x/audioeffectx.h"

using namespace std;


//-------------------------------------------------------------------------------------------------------
class MisEfx : public AudioEffectX
{


public:
    
	MisEfx(audioMasterCallback audioMaster);
	~MisEfx();

	// Processing
	virtual void processReplacing(float** inputs, float** outputs, VstInt32 sampleFrames) override;


};


