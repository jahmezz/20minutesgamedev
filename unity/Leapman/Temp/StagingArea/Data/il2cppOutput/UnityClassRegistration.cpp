struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 91 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//9. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//10. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//11. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//12. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//13. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//14. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//15. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//16. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//17. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//18. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//19. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//20. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//21. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//22. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//23. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//24. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//25. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//26. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//27. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//28. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//29. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//30. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//31. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//32. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//33. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//34. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//35. WheelCollider
	void RegisterClass_WheelCollider();
	RegisterClass_WheelCollider();

	//36. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//37. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//38. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//39. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//40. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//41. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//42. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//43. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//44. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//45. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//46. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//47. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//48. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//49. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//50. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//51. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//52. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//53. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//54. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//55. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//56. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//57. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//58. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//59. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//60. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//61. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//62. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//63. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//64. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//65. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//66. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//67. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//68. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//69. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//70. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//71. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//72. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//73. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//74. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//75. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//76. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//77. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//78. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//79. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//80. Halo
	void RegisterClass_Halo();
	RegisterClass_Halo();

	//81. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//82. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//83. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//84. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//85. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//86. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//87. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//88. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//89. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

	//90. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

}
