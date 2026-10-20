 #include <jni.h>
#include <android/log.h>

#define TAG "RDE_AI"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)

// Esta función se ejecuta cuando el mod se carga en GTA San Andreas
void OnModLoad() {
    LOGI("¡RDE para GTA SA Android 64 bits cargado correctamente!");
    
    // Aquí es donde posteriormente añadiremos los hooks de memoria 
    // para controlar la IA de los vehículos policiales (CCarAI).
}

// Interfaz requerida por AML (Android Mod Loader)
extern "C" JNIEXPORT void JNICALL 
Java_com_android_modloader_ModLoader_OnModLoad(JNIEnv *env, jclass clazz) {
    OnModLoad();
}
