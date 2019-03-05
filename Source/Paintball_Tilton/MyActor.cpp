// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	mesh = CreateDefaultSubobject  <UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = mesh;


}

void  AMyActor::PostActorCreated() {
	Super::PostActorCreated();
	CreateSquare();
}   // This is called when actor is already in level and map is opened.  
void  AMyActor::PostLoad() {
	Super::PostLoad();
	CreateSquare();
}
//replace the constructor code 
//create 2D square
void  AMyActor::CreateSquare() {
	TArray <FVector> Vertices;
	TArray <int32> Triangles;
	TArray <FVector> Normals;
	TArray < FLinearColor > Colors;
	Vertices.Add(FVector(0.f, 0.f, 0.f));
	Vertices.Add(FVector(0.f, 100.f, 0.f));
	Vertices.Add(FVector(0.f, 0.f, 100.f));
	Vertices.Add(FVector(0.f, 100.f, 100.f));
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(2);
	Triangles.Add(3);
	Triangles.Add(2);
	Triangles.Add(1);
	for (int32 i = 0; i < Vertices.Num(); i++) {
		Normals.Add(FVector(0.f, 0.f, 1.f));
		Colors.Add(FLinearColor::Red);
	} // Optional arrays.
	TArray <FVector2D> UV0;
	TArray <FProcMeshTangent> Tangents;
	mesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, Colors, Tangents, true);
}


