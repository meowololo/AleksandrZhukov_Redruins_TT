// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_2.generated.h"

/**
 * 
 */

class UDA_1;

UENUM(BlueprintType)
enum class EShowDA1_Link
{
	value_true UMETA(DisplayName = "value_true"),
	value_false UMETA(DisplayName = "value_false"),
	value_n UMETA(DisplayName = "value_n")
};

UCLASS(Blueprintable)
class REDRUINS_TT_2024_API UDA_2 : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EShowDA1_Link MyEnumValue;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditConditionHides, EditCondition = "MyEnumValue == EShowDA1_Link::value_true"))
	UDA_1* DA_1_Link;
};
