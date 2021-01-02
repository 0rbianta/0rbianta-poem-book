package com.example.a0rbiantanniirantolojisi;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;

public class MainActivity extends AppCompatActivity {


    private native void s_proc(String s_num, int view, int title, int content);
    private native void back_click(int view);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void s1(View v){
        s_proc("s1", R.id.poem_view, R.id.title, R.id.content);
    }
    public void s2(View v){
        s_proc("s2",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s3(View v){
        s_proc("s3",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s4(View v){
        s_proc("s4",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s5(View v){
        s_proc("s5",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s6(View v){
        s_proc("s6",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s7(View v){
        s_proc("s7",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s8(View v){
        s_proc("s8",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s9(View v){
        s_proc("s9",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s10(View v){
        s_proc("s10",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s11(View v){
        s_proc("s11",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s12(View v){
        s_proc("s12",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s13(View v){
        s_proc("s13",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s14(View v){
        s_proc("s14",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s15(View v){
        s_proc("s15",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s16(View v){
        s_proc("s16",R.id.poem_view,R.id.title,R.id.content);
    }
    public void s17(View v){
        s_proc("s17",R.id.poem_view,R.id.title,R.id.content);
    }
    public void back_click(View v){
        back_click(R.id.poem_view);
    }

    @Override
    public void onBackPressed() {
        back_click(R.id.poem_view);  
    }
    
    public void setVisibility(View v,int i){
        v.setVisibility((int)i);
    }

}
