package panyi.xyz.flapbird;

public class NativeBridge {
    static {
        System.loadLibrary("flapbird");
    }

    public static native void onInit();

    public static native void onResize(int width , int height);

    public static native void onRender();

    public static native void onDestory();
}
