package panyi.xyz.flapbird;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.os.Bundle;
import android.view.Window;
import android.view.WindowManager;
import android.widget.TextView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import panyi.xyz.flapbird.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    private RenderGLView mRenderGLView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        mRenderGLView = new RenderGLView(this);
        setContentView(mRenderGLView);
    }

    public static class RenderGLView extends GLSurfaceView implements GLSurfaceView.Renderer{
        public RenderGLView(Context context) {
            super(context);
            initView();
        }

        public void initView(){
            setEGLContextClientVersion(3);
            setEGLConfigChooser(8, 8, 8, 8, 16, 8);
            setRenderer(this);

            setRenderMode(RENDERMODE_CONTINUOUSLY);
        }

        @Override
        public void onSurfaceCreated(GL10 gl, EGLConfig config) {
            NativeBridge.onInit();
        }

        @Override
        public void onSurfaceChanged(GL10 gl, int width, int height) {
            NativeBridge.onResize(width , height);
        }

        @Override
        public void onDrawFrame(GL10 gl) {
            NativeBridge.onRender();
        }

        @Override
        protected void onDetachedFromWindow() {
            NativeBridge.onDestory();
            super.onDetachedFromWindow();
        }
    }//end inner class
}