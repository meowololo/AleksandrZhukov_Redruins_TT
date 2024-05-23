// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_1.generated.h"

/**
 * 
 */

class UDA_2;

USTRUCT(BlueprintType)
struct FMyStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Float = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Int32 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Bool = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDA_2* DA_2_Link;
	
};

UCLASS(Blueprintable)
class REDRUINS_TT_2024_API UDA_1 : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMyStruct TestStruct;
};