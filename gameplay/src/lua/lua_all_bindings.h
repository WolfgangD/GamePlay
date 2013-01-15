#ifndef LUA_ALL_BINDINGS_H_
#define LUA_ALL_BINDINGS_H_

#include "lua_AIAgent.h"
#include "lua_AIAgentListener.h"
#include "lua_AIController.h"
#include "lua_AIMessage.h"
#include "lua_AIState.h"
#include "lua_AIStateListener.h"
#include "lua_AIStateMachine.h"
#include "lua_AbsoluteLayout.h"
#include "lua_Animation.h"
#include "lua_AnimationClip.h"
#include "lua_AnimationClipListener.h"
#include "lua_AnimationController.h"
#include "lua_AnimationTarget.h"
#include "lua_AnimationValue.h"
#include "lua_AudioBuffer.h"
#include "lua_AudioController.h"
#include "lua_AudioListener.h"
#include "lua_AudioSource.h"
#include "lua_BoundingBox.h"
#include "lua_BoundingSphere.h"
#include "lua_Bundle.h"
#include "lua_Button.h"
#include "lua_Camera.h"
#include "lua_CheckBox.h"
#include "lua_Container.h"
#include "lua_Control.h"
#include "lua_ControlListener.h"
#include "lua_Curve.h"
#include "lua_DepthStencilTarget.h"
#include "lua_Effect.h"
#include "lua_FileSystem.h"
#include "lua_FlowLayout.h"
#include "lua_Font.h"
#include "lua_FontText.h"
#include "lua_Form.h"
#include "lua_FrameBuffer.h"
#include "lua_Frustum.h"
#include "lua_Game.h"
#include "lua_Gamepad.h"
#include "lua_Gesture.h"
#include "lua_Image.h"
#include "lua_Joint.h"
#include "lua_Joystick.h"
#include "lua_Keyboard.h"
#include "lua_Label.h"
#include "lua_Layout.h"
#include "lua_Light.h"
#include "lua_Logger.h"
#include "lua_Material.h"
#include "lua_MaterialParameter.h"
#include "lua_MathUtil.h"
#include "lua_Matrix.h"
#include "lua_Mesh.h"
#include "lua_MeshBatch.h"
#include "lua_MeshPart.h"
#include "lua_MeshSkin.h"
#include "lua_Model.h"
#include "lua_Mouse.h"
#include "lua_Node.h"
#include "lua_NodeCloneContext.h"
#include "lua_ParticleEmitter.h"
#include "lua_Pass.h"
#include "lua_PhysicsCharacter.h"
#include "lua_PhysicsCollisionObject.h"
#include "lua_PhysicsCollisionObjectCollisionListener.h"
#include "lua_PhysicsCollisionObjectCollisionPair.h"
#include "lua_PhysicsCollisionShape.h"
#include "lua_PhysicsCollisionShapeDefinition.h"
#include "lua_PhysicsConstraint.h"
#include "lua_PhysicsController.h"
#include "lua_PhysicsControllerHitFilter.h"
#include "lua_PhysicsControllerHitResult.h"
#include "lua_PhysicsControllerListener.h"
#include "lua_PhysicsFixedConstraint.h"
#include "lua_PhysicsGenericConstraint.h"
#include "lua_PhysicsGhostObject.h"
#include "lua_PhysicsHingeConstraint.h"
#include "lua_PhysicsRigidBody.h"
#include "lua_PhysicsRigidBodyParameters.h"
#include "lua_PhysicsSocketConstraint.h"
#include "lua_PhysicsSpringConstraint.h"
#include "lua_PhysicsVehicle.h"
#include "lua_PhysicsVehicleWheel.h"
#include "lua_Plane.h"
#include "lua_Platform.h"
#include "lua_Properties.h"
#include "lua_Quaternion.h"
#include "lua_RadioButton.h"
#include "lua_Ray.h"
#include "lua_Rectangle.h"
#include "lua_Ref.h"
#include "lua_RenderState.h"
#include "lua_RenderStateStateBlock.h"
#include "lua_RenderTarget.h"
#include "lua_Scene.h"
#include "lua_ScreenDisplayer.h"
#include "lua_ScriptController.h"
#include "lua_ScriptTarget.h"
#include "lua_Slider.h"
#include "lua_SpriteBatch.h"
#include "lua_Technique.h"
#include "lua_TextBox.h"
#include "lua_Texture.h"
#include "lua_TextureSampler.h"
#include "lua_Theme.h"
#include "lua_ThemeSideRegions.h"
#include "lua_ThemeStyle.h"
#include "lua_ThemeThemeImage.h"
#include "lua_ThemeUVs.h"
#include "lua_Touch.h"
#include "lua_Transform.h"
#include "lua_TransformListener.h"
#include "lua_Uniform.h"
#include "lua_Vector2.h"
#include "lua_Vector3.h"
#include "lua_Vector4.h"
#include "lua_VertexAttributeBinding.h"
#include "lua_VertexFormat.h"
#include "lua_VertexFormatElement.h"
#include "lua_VerticalLayout.h"
#include "lua_Global.h"

namespace gameplay
{

void lua_RegisterAllBindings();

}

#endif
