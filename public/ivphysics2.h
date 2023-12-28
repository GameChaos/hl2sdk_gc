//===== Copyright � 1996-2005, Valve Corporation, All rights reserved. ======//
//
// Purpose:
//
//===========================================================================//

#ifndef IVPHYSICS2_H
#define IVPHYSICS2_H
#ifdef _WIN32
#pragma once
#endif

#include "appframework/IAppSystem.h"
#include "tier1/utlvector.h"
#include "tier0/memalloc.h"

class CRnMeshShape;

abstract_class IVPhysics2 : public IAppSystem
{
public:
	// Auto reconstructed from vtable block @ 0x001A6570
	// from "libvphysics2.dylib", by cs2_vtable_dump.idc
	
	virtual void Unk11(void) = 0; // 11
	virtual void Unk12(void) = 0; // 12
	virtual void Unk13(void) = 0; // 13
	virtual void NumWorlds(void) = 0; // 14
	virtual void Unk15(void) = 0; // 15
	virtual void DumpState() = 0; // 16
	virtual void Unk17(void) = 0; // 17
	virtual void Unk18(void) = 0; // 18
	virtual void Unk19(void) = 0; // 19
	virtual void Unk20(void) = 0; // 20
	virtual void Unk21(void) = 0; // 21
	virtual void Unk22(void) = 0; // 22
	virtual CRnMeshShape *CreateMeshShape(void *a2) = 0; // 23
	virtual void Unk24(void) = 0; // 24
	virtual void ProbablyLinearCast(); // 25
	virtual void ProbablyConvexCast(); // 26
	virtual void Unk_27(); // 27 sub_18005E960
	virtual void Unk_28(); // 28 sub_18005EFD0
	virtual void Unk_29(); // 29 sub_18005ECA0
	virtual void Unk_30(); // 30 sub_18005F350
	virtual void Unk_31(); // 31 sub_18005F3A0
	virtual void Unk_32(); // 32 sub_18005F740
	virtual void HullCreateBox(); // 33
	virtual void HullCreateCone(); // 34
	virtual void HullCreateCylinder(); // 35
	virtual void Unk_36(); // 36 sub_18005F820
	virtual void HullCreate(); // 37
	virtual void HullCreateRuntime(); // 38
	virtual void HullDestroy(); // 39
	virtual void HullClone(); // 40
	virtual void Unk_41(); // 41 sub_18005FCF0
	virtual void Unk_42(); // 42 sub_18005FD10
	virtual void Unk_43(); // 43 sub_18005FFD0
	virtual void MeshCreate(); // 44
	virtual void MeshDestroy(); // 45
	virtual void MeshClone(); // 46
	virtual void Unk_47(); // 47 sub_180060130
	virtual void RnUnitTest(); // 48
	virtual void SetVisualDebugCameraHint(); // 49
	virtual void HullCreateRandom(); // 50
	virtual void GetProfileStats(); // 51
	virtual void ResetProfileStats(); // 52
	virtual void StartConComm(); // 53
	virtual void UpdateConComm(); // 54
	virtual void IsConCommActive(); // 55
	virtual void IsMultiThreaded(); // 56
	virtual void SetMultiThreaded(); // 57
	virtual void IsSimdEnabled(); // 58
	virtual void SetSimdEnabled(); // 59
	virtual void SetWorldContext(); // 60
	virtual void GetWorldContext(); // 61
	virtual void CreateDebugSceneObject(); // 62
	virtual void DestroyDebugSceneObject(); // 63
	virtual void CreateDebugMeshes(); // 64
	virtual void MaybeGetSnoopStats(); // 65
	virtual void Unk_66(); // 66 sub_1800613A0
	virtual void Unk_67(); // 67 sub_180061360
	virtual void CreateAggregateDataFromDiskData(); // 68
	virtual void ParseInteractionLayerList(); // 69
	virtual void Draw(); // 70
	virtual void CreateSoftbody(); // 71
	virtual void DestroySoftbody(); // 72

#if 0
	virtual void GetSurfacePropertyController(void);
	virtual void GetIntersectionDictionary(void) = 0;
	virtual void CreateSphereShape(Vector const&,float) = 0;
	virtual void CreateCapsuleShape(Vector const&,Vector const&,float) = 0;
	virtual void CreateHullShape(RnHull_t const*) = 0;
	virtual void CreateMeshShape(RnMesh_t const*) = 0;
	virtual void DestroyShape(HPhysicsShape) = 0;
	virtual void LinearCast(RnSweptTransform_t const&,HPhysicsShape,RnSweptTransform_t const&,HPhysicsShape) = 0;
	virtual void ConvexCast(RnSweptTransform_t const&,HPhysicsShape,RnSweptTransform_t const&,HPhysicsShape,CUtlVector<RnIteration_t,CUtlMemory<RnIteration_t,int>> const&) = 0;
	virtual void ClosestPoints(CTransform const&,HPhysicsShape,CTransform const&,HPhysicsShape) = 0;
	virtual void HullCreateBox(Vector const&,Vector const&,CResourceStream *,RnHull_t *) = 0;
	virtual void HullCreateCone(Vector const&,Vector const&,float,CResourceStream *,RnHull_t *) = 0;
	virtual void HullCreateCylinder(Vector const&,Vector const&,float,CResourceStream *,RnHull_t *) = 0;
	virtual void HullCreate(int,Vector const*,CResourceStream *,RnHull_t *,RnHullSimplificationParams_t *) = 0;
	virtual void HullCreate(CMesh *,CResourceStream *,RnHull_t *,RnHullSimplificationParams_t *) = 0;
	virtual void HullDestroy(RnHull_t *,CResourceStream *,bool) = 0;
	virtual void HullClone(RnHull_t *,RnHull_t const&,CResourceStream *) = 0;
	virtual void MeshCreate(int,unsigned int const*,unsigned char const*,int,Vector const*,CResourceStream *,RnMesh_t *) = 0;
	virtual void MeshCreate(CMesh *,CResourceStream *,RnMesh_t *) = 0;
	virtual void MeshDestroy(RnMesh_t *,CResourceStream *,bool) = 0;
	virtual void MeshClone(RnMesh_t *,RnMesh_t const&,CResourceStream *) = 0;
	virtual void EnableVisualDebugger(bool) = 0;
	virtual void SetVisualDebugCameraHint(int,CFrustum const&) = 0;
	virtual void HullCreateRandom(int,float,float,CResourceStream *,RnHull_t *) = 0;
	virtual void GetProfileStats(void)const();
	virtual void ResetProfileStats(void) = 0;
	virtual void StartConComm(IVConComm *) = 0;
	virtual void UpdateConComm(void) = 0;
	virtual void IsConCommActive(void) = 0;
	virtual void IsMultiThreaded(void) = 0;
	virtual void SetMultiThreaded(bool) = 0;
	virtual void IsSimdEnabled(void) = 0;
	virtual void SetSimdEnabled(bool) = 0;
	virtual void UnserializeWorld(void *,unsigned int) = 0;
	virtual void SetWorldContext(CRnWorld *) = 0;
	virtual void GetWorldContext(void) = 0;
	virtual void CreateDebugSceneObject(DebugSceneObjectParams_t const&,SceneObjectBuffers_t *) = 0;
	virtual void DestroyDebugSceneObject(CSceneAnimatableObject *) = 0;
	virtual void CreateDebugMeshes(DebugTraceDataParams_t const&,PhysicsDebugMeshBuffers_t *,PhysicsDebugMeshBuffers_t *) = 0;
	virtual void GetSnoopStats(CUtlVector<RnWorldSnoopStats_t,CUtlMemory<RnWorldSnoopStats_t,int>> *) = 0;
	virtual void GetDistanceBetweenHulls(Vector const*,int,Vector const*,int) = 0;
	virtual void GetDistanceBetweenHulls(matrix3x4_t const&,Vector const*,int,matrix3x4_t const&,Vector const*,int) = 0;
	virtual void CreateAggregateDataFromDiskData(VPhysXAggregateData_t const*,unsigned long long) = 0;
	virtual void ParseInteractionLayerList(char const*) = 0;
	virtual void Draw(ISceneViewDebugOverlays *) = 0;
	virtual void CreateSoftbody(CFeModel const*) = 0;
	virtual void DestroySoftbody(HPhysicsSoftbody) = 0;
	virtual void GetIntersectionDictionaryInternal(void) = 0;
#endif
};

#endif // IVPHYSICS2_H
