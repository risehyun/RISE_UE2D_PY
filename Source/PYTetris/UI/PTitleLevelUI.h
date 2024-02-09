// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PTitleLevelUI.generated.h"

/**
 * 
 */
UCLASS()
class PYTETRIS_API UPTitleLevelUI : public UUserWidget
{
	GENERATED_BODY()

public:
	UPTitleLevelUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual void NativeConstruct() override;

private:
	UFUNCTION()
	void OnStartGameButtonClicked();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=UPTitleWidget, Meta=(AllowPrivateAccess, BindWidget))
	TObjectPtr<class UButton> StartGameButton;

};
