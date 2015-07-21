  ; ===========================================
  ; d3dx8d.inc copyright MASM32 1998 - 2005
  ; ===========================================

IFNDEF D3DX8D_INC
D3DX8D_INC equ <1>

D3DXAssembleShader PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXAssembleShaderFromFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXAssembleShaderFromFile equ <D3DXAssembleShaderFromFileA>

D3DXAssembleShaderFromFileW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXAssembleShaderFromResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXAssembleShaderFromResource equ <D3DXAssembleShaderFromResourceA>

D3DXAssembleShaderFromResourceW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXBoxBoundProbe PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCheckCubeTextureRequirements PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCheckTextureRequirements PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCheckVolumeTextureRequirements PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCleanMesh PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXColorAdjustContrast PROTO :DWORD,:DWORD,:DWORD
D3DXColorAdjustSaturation PROTO :DWORD,:DWORD,:DWORD
D3DXComputeBoundingBox PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXComputeBoundingSphere PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXComputeNormalMap PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXComputeNormals PROTO :DWORD,:DWORD
D3DXComputeTangent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXConvertMeshSubsetToSingleStrip PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXConvertMeshSubsetToStrips PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCpuOptimizations PROTO :DWORD
D3DXCreateBox PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateBuffer PROTO :DWORD,:DWORD
D3DXCreateCubeTexture PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromFileA PROTO :DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromFile equ <D3DXCreateCubeTextureFromFileA>

D3DXCreateCubeTextureFromFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromFileEx equ <D3DXCreateCubeTextureFromFileExA>

D3DXCreateCubeTextureFromFileExW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromFileInMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromFileInMemoryEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromFileW PROTO :DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromResource equ <D3DXCreateCubeTextureFromResourceA>

D3DXCreateCubeTextureFromResourceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromResourceEx equ <D3DXCreateCubeTextureFromResourceExA>

D3DXCreateCubeTextureFromResourceExW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateCubeTextureFromResourceW PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateCylinder PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateEffect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateEffectFromFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateEffectFromFile equ <D3DXCreateEffectFromFileA>

D3DXCreateEffectFromFileW PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateEffectFromResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateEffectFromResource equ <D3DXCreateEffectFromResourceA>

D3DXCreateEffectFromResourceW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateFont PROTO :DWORD,:DWORD,:DWORD
D3DXCreateFontIndirect PROTO :DWORD,:DWORD,:DWORD
D3DXCreateMatrixStack PROTO :DWORD,:DWORD
D3DXCreateMesh PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateMeshFVF PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreatePMeshFromStream PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreatePolygon PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateRenderToEnvMap PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateRenderToSurface PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateSPMesh PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateSkinMesh PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateSkinMeshFVF PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateSkinMeshFromMesh PROTO :DWORD,:DWORD,:DWORD
D3DXCreateSphere PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateSprite PROTO :DWORD,:DWORD
D3DXCreateTeapot PROTO :DWORD,:DWORD,:DWORD
D3DXCreateTextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateText equ <D3DXCreateTextA>

D3DXCreateTextW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTexture PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTextureFromFileA PROTO :DWORD,:DWORD,:DWORD
D3DXCreateTextureFromFile equ <D3DXCreateTextureFromFileA>

D3DXCreateTextureFromFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTextureFromFileEx equ <D3DXCreateTextureFromFileExA>

D3DXCreateTextureFromFileExW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTextureFromFileInMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTextureFromFileInMemoryEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTextureFromFileW PROTO :DWORD,:DWORD,:DWORD
D3DXCreateTextureFromResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTextureFromResource equ <D3DXCreateTextureFromResourceA>

D3DXCreateTextureFromResourceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTextureFromResourceEx equ <D3DXCreateTextureFromResourceExA>

D3DXCreateTextureFromResourceExW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTextureFromResourceW PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateTorus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateVolumeTexture PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromFileA PROTO :DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromFile equ <D3DXCreateVolumeTextureFromFileA>

D3DXCreateVolumeTextureFromFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromFileEx equ <D3DXCreateVolumeTextureFromFileExA>

D3DXCreateVolumeTextureFromFileExW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromFileInMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromFileInMemoryEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromFileW PROTO :DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromResource equ <D3DXCreateVolumeTextureFromResourceA>

D3DXCreateVolumeTextureFromResourceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromResourceEx equ <D3DXCreateVolumeTextureFromResourceExA>

D3DXCreateVolumeTextureFromResourceExW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXCreateVolumeTextureFromResourceW PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXDeclaratorFromFVF PROTO :DWORD,:DWORD
D3DXFVFFromDeclarator PROTO :DWORD,:DWORD
D3DXFillCubeTexture PROTO :DWORD,:DWORD,:DWORD
D3DXFillTexture PROTO :DWORD,:DWORD,:DWORD
D3DXFillVolumeTexture PROTO :DWORD,:DWORD,:DWORD
D3DXFilterTexture PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXFresnelTerm PROTO :DWORD,:DWORD
D3DXGeneratePMesh PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXGetErrorStringA PROTO :DWORD,:DWORD,:DWORD
D3DXGetErrorString equ <D3DXGetErrorStringA>

D3DXGetErrorStringW PROTO :DWORD,:DWORD,:DWORD
D3DXGetFVFVertexSize PROTO :DWORD
D3DXGetImageInfoFromFileA PROTO :DWORD,:DWORD
D3DXGetImageInfoFromFile equ <D3DXGetImageInfoFromFileA>

D3DXGetImageInfoFromFileInMemory PROTO :DWORD,:DWORD,:DWORD
D3DXGetImageInfoFromFileW PROTO :DWORD,:DWORD
D3DXGetImageInfoFromResourceA PROTO :DWORD,:DWORD,:DWORD
D3DXGetImageInfoFromResource equ <D3DXGetImageInfoFromResourceA>

D3DXGetImageInfoFromResourceW PROTO :DWORD,:DWORD,:DWORD
D3DXIntersect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXIntersectSubset PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadMeshFromX PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadMeshFromXof PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadSkinMeshFromXof PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadSurfaceFromFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadSurfaceFromFile equ <D3DXLoadSurfaceFromFileA>

D3DXLoadSurfaceFromFileInMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadSurfaceFromFileW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadSurfaceFromMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadSurfaceFromResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadSurfaceFromResource equ <D3DXLoadSurfaceFromResourceA>

D3DXLoadSurfaceFromResourceW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadSurfaceFromSurface PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadVolumeFromFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadVolumeFromFile equ <D3DXLoadVolumeFromFileA>

D3DXLoadVolumeFromFileInMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadVolumeFromFileW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadVolumeFromMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadVolumeFromResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadVolumeFromResource equ <D3DXLoadVolumeFromResourceA>

D3DXLoadVolumeFromResourceW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXLoadVolumeFromVolume PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixAffineTransformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixInverse PROTO :DWORD,:DWORD,:DWORD
D3DXMatrixLookAtLH PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixLookAtRH PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixMultiply PROTO :DWORD,:DWORD,:DWORD
D3DXMatrixMultiplyTranspose PROTO :DWORD,:DWORD,:DWORD
D3DXMatrixOrthoLH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixOrthoOffCenterLH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixOrthoOffCenterRH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixOrthoRH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixPerspectiveFovLH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixPerspectiveFovRH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixPerspectiveLH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixPerspectiveOffCenterLH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixPerspectiveOffCenterRH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixPerspectiveRH PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixReflect PROTO :DWORD,:DWORD
D3DXMatrixRotationAxis PROTO :DWORD,:DWORD,:DWORD
D3DXMatrixRotationQuaternion PROTO :DWORD,:DWORD
D3DXMatrixRotationX PROTO :DWORD,:DWORD
D3DXMatrixRotationY PROTO :DWORD,:DWORD
D3DXMatrixRotationYawPitchRoll PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixRotationZ PROTO :DWORD,:DWORD
D3DXMatrixScaling PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixShadow PROTO :DWORD,:DWORD,:DWORD
D3DXMatrixTransformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixTranslation PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXMatrixTranspose PROTO :DWORD,:DWORD
D3DXMatrixfDeterminant PROTO :DWORD
D3DXPlaneFromPointNormal PROTO :DWORD,:DWORD,:DWORD
D3DXPlaneFromPoints PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXPlaneIntersectLine PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXPlaneNormalize PROTO :DWORD,:DWORD
D3DXPlaneTransform PROTO :DWORD,:DWORD,:DWORD
D3DXQuaternionBaryCentric PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXQuaternionExp PROTO :DWORD,:DWORD
D3DXQuaternionInverse PROTO :DWORD,:DWORD
D3DXQuaternionLn PROTO :DWORD,:DWORD
D3DXQuaternionMultiply PROTO :DWORD,:DWORD,:DWORD
D3DXQuaternionNormalize PROTO :DWORD,:DWORD
D3DXQuaternionRotationAxis PROTO :DWORD,:DWORD,:DWORD
D3DXQuaternionRotationMatrix PROTO :DWORD,:DWORD
D3DXQuaternionRotationYawPitchRoll PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXQuaternionSlerp PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXQuaternionSquad PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXQuaternionSquadSetup PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXQuaternionToAxisAngle PROTO :DWORD,:DWORD,:DWORD
D3DXSaveMeshToX PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXSaveSurfaceToFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXSaveSurfaceToFile equ <D3DXSaveSurfaceToFileA>

D3DXSaveSurfaceToFileW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXSaveTextureToFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXSaveTextureToFile equ <D3DXSaveTextureToFileA>

D3DXSaveTextureToFileW PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXSaveVolumeToFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXSaveVolumeToFile equ <D3DXSaveVolumeToFileA>

D3DXSaveVolumeToFileW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXSimplifyMesh PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXSphereBoundProbe PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXSplitMesh PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXTessellateNPatches PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXValidMesh PROTO :DWORD,:DWORD,:DWORD
D3DXVec2BaryCentric PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec2CatmullRom PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec2Hermite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec2Normalize PROTO :DWORD,:DWORD
D3DXVec2Transform PROTO :DWORD,:DWORD,:DWORD
D3DXVec2TransformCoord PROTO :DWORD,:DWORD,:DWORD
D3DXVec2TransformNormal PROTO :DWORD,:DWORD,:DWORD
D3DXVec3BaryCentric PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec3CatmullRom PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec3Hermite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec3Normalize PROTO :DWORD,:DWORD
D3DXVec3Project PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec3Transform PROTO :DWORD,:DWORD,:DWORD
D3DXVec3TransformCoord PROTO :DWORD,:DWORD,:DWORD
D3DXVec3TransformNormal PROTO :DWORD,:DWORD,:DWORD
D3DXVec3Unproject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec4BaryCentric PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec4CatmullRom PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec4Cross PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3DXVec4Hermite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DXVec4Normalize PROTO :DWORD,:DWORD
D3DXVec4Transform PROTO :DWORD,:DWORD,:DWORD
D3DXWeldVertices PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file d3dx8d.inc
echo -----------------------------------------
ENDIF