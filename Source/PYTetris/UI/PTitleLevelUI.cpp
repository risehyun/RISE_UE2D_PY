// Fill out your copyright notice in the Description page of Project Settings.


#include "PTitleLevelUI.h"
#include "Components/Button.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

UPTitleLevelUI::UPTitleLevelUI(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UPTitleLevelUI::NativeConstruct()
{
	StartGameButton.Get()->OnClicked.AddDynamic(this, &ThisClass::OnStartGameButtonClicked);
}

void UPTitleLevelUI::OnStartGameButtonClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("MainGame"));
}


