#include <glut.h>
#include <stdlib.h>
#include <iostream>
#include <string>

float fx = 0, fy = 40, fz = 125;    // koordinat posisi yang memandang (from where)
float tx = 0, ty = 0, tz = 0;          // koordinat tujuan pandang (to where)
//float sudut = 0;
float yp = 0;

void LV()
{
    gluLookAt(fx, fy, fz,   // melihat dari mana
        tx, ty, tz,   // melihat ke mana
        0, 1, 0);     // up vector

    GLfloat light_position[] = { 0, 50, 100,  0.0 };   // Posisi sumber cahaya
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE);

    glEnable(GL_LIGHTING);  //pencahayaan
    glEnable(GL_LIGHT0);    //pencahayaan
    glEnable(GL_DEPTH_TEST);//efek 3d
    glEnable(GL_COLOR_MATERIAL); //mewarnai benda 
}


void Gambar()
{

    glBegin(GL_POLYGON);//tanah hijau
    glColor3ub(125, 159, 73);
    glVertex3f(-60, -20, -60); glVertex3f(60, -20, -60);
    glVertex3f(60, -20, 60); glVertex3f(-60, -20, 60);
    glEnd();

    //base
    //dinding belakang
    glBegin(GL_POLYGON);
    glColor3ub(144, 66, 35);
    glVertex3f(-25, -7, -25); glVertex3f(25, -7, -25);
    glVertex3f(25, -20, -25); glVertex3f(-25, -20, -25);
    glEnd();

    //dinding depan
    glBegin(GL_POLYGON);
    glColor3ub(144, 66, 35);
    glVertex3f(-25, -7, 25); glVertex3f(25, -7, 25);
    glVertex3f(25, -20, 25); glVertex3f(-25, -20, 25);
    glEnd();

    //dinding kiri
    glBegin(GL_POLYGON);
    glColor3ub(122, 83, 45);
    glVertex3f(-25, -7, -25); glVertex3f(-25, -7, 25);
    glVertex3f(-25, -20, 25); glVertex3f(-25, -20, -25);
    glEnd();

    //dinding kanan
    glBegin(GL_POLYGON);
    glColor3ub(122, 83, 45);
    glVertex3f(25, -7, -25); glVertex3f(25, -7, 25);
    glVertex3f(25, -20, 25); glVertex3f(25, -20, -25);
    glEnd();
    //lantai pondasi 1
    glBegin(GL_POLYGON);
    glColor3ub(201, 163, 121);
    glVertex3f(-25, -7, -25); glVertex3f(25, -7, -25);
    glVertex3f(25, -7, 25); glVertex3f(-25, -7, 25);
    glEnd();




    //tingkat 1
    //dinding belakang
    glBegin(GL_POLYGON);
    glColor3ub(207, 189, 165);
    glVertex3f(-15, -7, -15); glVertex3f(15, -7, -15);
    glVertex3f(15, 15, -15); glVertex3f(-15, 15, -15);
    glEnd();

    //dinding depan
    glBegin(GL_POLYGON);
    glColor3ub(207, 189, 165);
    glVertex3f(-15, -7, 15); glVertex3f(15, -7, 15);
    glVertex3f(15, 15, 15); glVertex3f(-15, 15, 15);
    glEnd();

    //dinding depan hitam
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-9, -7, 15.01); glVertex3f(9, -7, 15.01);
    glVertex3f(9, 15, 15.01); glVertex3f(-9, 15, 15.01);
    glEnd();

    //dinding depan merah atas
    glBegin(GL_POLYGON);
    glColor3ub(198 + 25, 29 + 25, 6 + 25);
    glVertex3f(-8, 10, 15.011); glVertex3f(8, 10, 15.011);
    glVertex3f(8, 15, 15.011); glVertex3f(-8, 15, 15.011);
    glEnd();

    //dinding depan merah bawah kiri
    glBegin(GL_POLYGON);
    glColor3ub(198 + 25, 29 + 25, 6 + 25);
    glVertex3f(-8, -7, 15.02); glVertex3f(-0.5, -7, 15.02);
    glVertex3f(-0.5, 9, 15.02); glVertex3f(-8, 9, 15.02);
    glEnd();
    //dinding depan merah bawah kanan
    glBegin(GL_POLYGON);
    glColor3ub(198 + 25, 29 + 25, 6 + 25);
    glVertex3f(0.5, -7, 15.02); glVertex3f(8, -7, 15.02);
    glVertex3f(8, 9, 15.02); glVertex3f(0.5, 9, 15.02);
    glEnd();

    //dinding kiri
    glBegin(GL_POLYGON);
    glColor3ub(227, 202, 177);
    glVertex3f(-15, -7, -15); glVertex3f(-15, -7, 15);
    glVertex3f(-15, 15, 15); glVertex3f(-15, 15, -15);
    glEnd();

    //dinding kanan
    glBegin(GL_POLYGON);
    glColor3ub(227, 202, 177);
    glVertex3f(15, -7, -15); glVertex3f(15, -7, 15);
    glVertex3f(15, 15, 15); glVertex3f(15, 15, -15);
    glEnd();

    //lantai pondasi 1
    glBegin(GL_POLYGON);
    glColor3ub(165, 88, 68);
    glVertex3f(-15, 15, -15); glVertex3f(15, 15, -15);
    glVertex3f(15, 15, 15); glVertex3f(-15, 15, 15);
    glEnd();

    //atap belakang
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(15, 15, -15); glVertex3f(-15, 15, -15);
    glVertex3f(-24, 10, -24); glVertex3f(24, 10, -24);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-24, 10, -24); glVertex3f(24, 10, -24);
    glVertex3f(31, 10, -31); glVertex3f(-31, 10, -31);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-31, 10, -31); glVertex3f(31, 10, -31);
    glVertex3f(36, 13, -36); glVertex3f(-36, 13, -36);
    glEnd();

    //atap depan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(15, 15, 15); glVertex3f(-15, 15, 15);
    glVertex3f(-24, 10, 24); glVertex3f(24, 10, 24);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-24, 10, 24); glVertex3f(24, 10, 24);
    glVertex3f(31, 10, 31); glVertex3f(-31, 10, 31);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-31, 10, 31); glVertex3f(31, 10, 31);
    glVertex3f(36, 13, 36); glVertex3f(-36, 13, 36);
    glEnd();

    //atap kiri
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(-15, 15, -15); glVertex3f(-15, 15, 15);
    glVertex3f(-24, 10, 24); glVertex3f(-24, 10, -24);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-24, 10, -24); glVertex3f(-24, 10, 24);
    glVertex3f(-31, 10, 31); glVertex3f(-31, 10, -31);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-31, 10, -31); glVertex3f(-31, 10, 31);
    glVertex3f(-36, 13, 36); glVertex3f(-36, 13, -36);
    glEnd();

    //atap kanan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(15, 15, -15); glVertex3f(15, 15, 15);
    glVertex3f(24, 10, 24); glVertex3f(24, 10, -24);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(24, 10, -24); glVertex3f(24, 10, 24);
    glVertex3f(31, 10, 31); glVertex3f(31, 10, -31);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(31, 10, -31); glVertex3f(31, 10, 31);
    glVertex3f(36, 13, 36); glVertex3f(36, 13, -36);
    glEnd();



    //tingkat 2
    //dinding belakang
    glBegin(GL_POLYGON);
    glColor3ub(207, 209, 185);
    glVertex3f(-13, 15, -13); glVertex3f(13, 15, -13);
    glVertex3f(13, 28, -13); glVertex3f(-13, 28, -13);
    glEnd();

    //dinding depan
    glBegin(GL_POLYGON);
    glColor3ub(207, 209, 185);
    glVertex3f(-13, 15, 13); glVertex3f(13, 15, 13);
    glVertex3f(13, 28, 13); glVertex3f(-13, 28, 13);
    glEnd();

    //dinding kiri
    glBegin(GL_POLYGON);
    glColor3ub(227, 207, 177);
    glVertex3f(-13, 15, -13); glVertex3f(-13, 15, 13);
    glVertex3f(-13, 28, 13); glVertex3f(-13, 28, -13);
    glEnd();

    //dinding kanan
    glBegin(GL_POLYGON);
    glColor3ub(227, 207, 177);
    glVertex3f(13, 15, -13); glVertex3f(13, 15, 13);
    glVertex3f(13, 28, 13); glVertex3f(13, 28, -13);
    glEnd();

    //lantai pondasi 2
    glBegin(GL_POLYGON);
    glColor3ub(165, 88, 68);
    glVertex3f(-13, 28, -13); glVertex3f(13, 28, -13);
    glVertex3f(13, 28, 13); glVertex3f(-13, 28, 13);
    glEnd();

    //atap belakang
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(13, 28, -13); glVertex3f(-13, 28, -13);
    glVertex3f(-21, 24, -21); glVertex3f(21, 24, -21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-21, 24, -21); glVertex3f(21, 24, -21);
    glVertex3f(27, 24, -27); glVertex3f(-27, 24, -27);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-27, 24, -27); glVertex3f(27, 24, -27);
    glVertex3f(31, 26.5, -31); glVertex3f(-31, 26.5, -31);
    glEnd();

    //atap depan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(13, 28, 13); glVertex3f(-13, 28, 13);
    glVertex3f(-21, 24, 21); glVertex3f(21, 24, 21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-21, 24, 21); glVertex3f(21, 24, 21);
    glVertex3f(27, 24, 27); glVertex3f(-27, 24, 27);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-27, 24, 27); glVertex3f(27, 24, 27);
    glVertex3f(31, 26.5, 31); glVertex3f(-31, 26.5, 31);
    glEnd();

    //atap kiri
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(-13, 28, -13); glVertex3f(-13, 28, 13);
    glVertex3f(-21, 24, 21); glVertex3f(-21, 24, -21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-21, 24, -21); glVertex3f(-21, 24, 21);
    glVertex3f(-27, 24, 27); glVertex3f(-27, 24, -27);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-27, 24, -27); glVertex3f(-27, 24, 27);
    glVertex3f(-31, 26.5, 31); glVertex3f(-31, 26.5, -31);
    glEnd();

    //atap kanan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(13, 28, -13); glVertex3f(13, 28, 13);
    glVertex3f(21, 24, 21); glVertex3f(21, 24, -21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(21, 24, -21); glVertex3f(21, 24, 21);
    glVertex3f(27, 24, 27); glVertex3f(27, 24, -27);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(27, 24, -27); glVertex3f(27, 24, 27);
    glVertex3f(31, 26.5, 31); glVertex3f(31, 26.5, -31);
    glEnd();






    //tingkat 3
    //dinding belakang
    glBegin(GL_POLYGON);
    glColor3ub(207, 189, 165);
    glVertex3f(-11, 28, -11); glVertex3f(11, 28, -11);
    glVertex3f(11, 39, -11); glVertex3f(-11, 39, -11);
    glEnd();

    //dinding depan
    glBegin(GL_POLYGON);
    glColor3ub(207, 189, 165);
    glVertex3f(-11, 28, 11); glVertex3f(11, 28, 11);
    glVertex3f(11, 39, 11); glVertex3f(-11, 39, 11);
    glEnd();

    //dinding kiri
    glBegin(GL_POLYGON);
    glColor3ub(207, 169, 145);
    glVertex3f(-11, 28, -11); glVertex3f(-11, 28, 11);
    glVertex3f(-11, 39, 11); glVertex3f(-11, 39, -11);
    glEnd();

    //dinding kanan
    glBegin(GL_POLYGON);
    glColor3ub(207, 169, 145);
    glVertex3f(11, 28, -11); glVertex3f(11, 28, 11);
    glVertex3f(11, 39, 11); glVertex3f(11, 39, -11);
    glEnd();

    //lantai pondasi 3
    glBegin(GL_POLYGON);
    glColor3ub(165, 88, 68);
    glVertex3f(-11, 39, -11); glVertex3f(11, 39, -11);
    glVertex3f(11, 39, 11); glVertex3f(-11, 39, 11);
    glEnd();

    //atap belakang
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(11, 39, -11); glVertex3f(-11, 39, -11);
    glVertex3f(-18, 36, -18); glVertex3f(18, 36, -18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-18, 36, -18); glVertex3f(18, 36, -18);
    glVertex3f(23, 36, -23); glVertex3f(-23, 36, -23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-23, 36, -23); glVertex3f(23, 36, -23);
    glVertex3f(26, 38, -26); glVertex3f(-26, 38, -26);
    glEnd();

    //atap depan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(11, 39, 11); glVertex3f(-11, 39, 11);
    glVertex3f(-18, 36, 18); glVertex3f(18, 36, 18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-18, 36, 18); glVertex3f(18, 36, 18);
    glVertex3f(23, 36, 23); glVertex3f(-23, 36, 23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-23, 36, 23); glVertex3f(23, 36, 23);
    glVertex3f(26, 38, 26); glVertex3f(-26, 38, 26);
    glEnd();

    //atap kiri
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(-11, 39, -11); glVertex3f(-11, 39, 11);
    glVertex3f(-18, 36, 18); glVertex3f(-18, 36, -18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-18, 36, -18); glVertex3f(-18, 36, 18);
    glVertex3f(-23, 36, 23); glVertex3f(-23, 36, -23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-23, 36, -23); glVertex3f(-23, 36, 23);
    glVertex3f(-26, 38, 26); glVertex3f(-26, 38, -26);
    glEnd();

    //atap kanan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(11, 39, -11); glVertex3f(11, 39, 11);
    glVertex3f(18, 36, 18); glVertex3f(18, 36, -18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(18, 36, -18); glVertex3f(18, 36, 18);
    glVertex3f(23, 36, 23); glVertex3f(23, 36, -23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(23, 36, -23); glVertex3f(23, 36, 23);
    glVertex3f(26, 38, 26); glVertex3f(26, 38, -26);
    glEnd();





    //tingkat 4
    //dinding belakang
    glBegin(GL_POLYGON);
    glColor3ub(207, 169, 145);
    glVertex3f(-9, 39, -9); glVertex3f(9, 39, -9);
    glVertex3f(9, 48, -9); glVertex3f(-9, 48, -9);
    glEnd();

    //dinding depan
    glBegin(GL_POLYGON);
    glColor3ub(207, 169, 145);
    glVertex3f(-9, 39, 9); glVertex3f(9, 39, 9);
    glVertex3f(9, 48, 9); glVertex3f(-9, 48, 9);
    glEnd();

    //dinding kiri
    glBegin(GL_POLYGON);
    glColor3ub(207, 149, 125);
    glVertex3f(-9, 39, -9); glVertex3f(-9, 39, 9);
    glVertex3f(-9, 48, 9); glVertex3f(-9, 48, -9);
    glEnd();

    //dinding kanan
    glBegin(GL_POLYGON);
    glColor3ub(207, 149, 125);
    glVertex3f(9, 39, -9); glVertex3f(9, 39, 9);
    glVertex3f(9, 48, 9); glVertex3f(9, 48, -9);
    glEnd();

    //lantai pondasi 4
    glBegin(GL_POLYGON);
    glColor3ub(165, 88, 68);
    glVertex3f(-9, 48, -9); glVertex3f(9, 48, -9);
    glVertex3f(9, 48, 9); glVertex3f(-9, 48, 9);
    glEnd();

    //atap belakang
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(9, 48, -9); glVertex3f(-9, 48, -9);
    glVertex3f(-15, 46, -15); glVertex3f(15, 46, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-15, 46, -15); glVertex3f(15, 46, -15);
    glVertex3f(19, 46, -19); glVertex3f(-19, 46, -19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-19, 46, -19); glVertex3f(19, 46, -19);
    glVertex3f(21, 47.5, -21); glVertex3f(-21, 47.5, -21);
    glEnd();

    //atap depan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(9, 48, 9); glVertex3f(-9, 48, 9);
    glVertex3f(-15, 46, 15); glVertex3f(15, 46, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-15, 46, 15); glVertex3f(15, 46, 15);
    glVertex3f(19, 46, 19); glVertex3f(-19, 46, 19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-19, 46, 19); glVertex3f(19, 46, 19);
    glVertex3f(21, 47.5, 21); glVertex3f(-21, 47.5, 21);
    glEnd();

    //atap kiri
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(-9, 48, -9); glVertex3f(-9, 48, 9);
    glVertex3f(-15, 46, 15); glVertex3f(-15, 46, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-15, 46, -15); glVertex3f(-15, 46, 15);
    glVertex3f(-19, 46, 19); glVertex3f(-19, 46, -19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-19, 46, -19); glVertex3f(-19, 46, 19);
    glVertex3f(-21, 47.5, 21); glVertex3f(-21, 47.5, -21);
    glEnd();

    //atap kanan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(9, 48, -9); glVertex3f(9, 48, 9);
    glVertex3f(15, 46, 15); glVertex3f(15, 46, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(15, 46, -15); glVertex3f(15, 46, 15);
    glVertex3f(19, 46, 19); glVertex3f(19, 46, -19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(19, 46, -19); glVertex3f(19, 46, 19);
    glVertex3f(21, 47.5, 21); glVertex3f(21, 47.5, -21);
    glEnd();




    //tingkat 5
    //dinding belakang
    glBegin(GL_POLYGON);
    glColor3ub(207, 149, 125);
    glVertex3f(-7, 48, -7); glVertex3f(7, 48, -7);
    glVertex3f(7, 55, -7); glVertex3f(-7, 55, -7);
    glEnd();

    //dinding depan
    glBegin(GL_POLYGON);
    glColor3ub(207, 149, 125);
    glVertex3f(-7, 48, 7); glVertex3f(7, 48, 7);
    glVertex3f(7, 55, 7); glVertex3f(-7, 55, 7);
    glEnd();

    //dinding kiri
    glBegin(GL_POLYGON);
    glColor3ub(207, 129, 105);
    glVertex3f(-7, 48, -7); glVertex3f(-7, 48, 7);
    glVertex3f(-7, 55, 7); glVertex3f(-7, 55, -7);
    glEnd();

    //dinding kanan
    glBegin(GL_POLYGON);
    glColor3ub(207, 129, 105);
    glVertex3f(7, 48, -7); glVertex3f(7, 48, 7);
    glVertex3f(7, 55, 7); glVertex3f(7, 55, -7);
    glEnd();

    //lantai pondasi 5
    glBegin(GL_POLYGON);
    glColor3ub(165, 88, 68);
    glVertex3f(-7, 55, -7); glVertex3f(7, 55, -7);
    glVertex3f(7, 55, 7); glVertex3f(-7, 55, 7);
    glEnd();

    //atap belakang
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(7, 55, -7); glVertex3f(-7, 55, -7);
    glVertex3f(-12, 54, -12); glVertex3f(12, 54, -12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-12, 54, -12); glVertex3f(12, 54, -12);
    glVertex3f(15, 54, -15); glVertex3f(-15, 54, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-15, 54, -15); glVertex3f(15, 54, -15);
    glVertex3f(16, 55, -16); glVertex3f(-16, 55, -16);
    glEnd();

    //atap depan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(7, 55, 7); glVertex3f(-7, 55, 7);
    glVertex3f(-12, 54, 12); glVertex3f(12, 54, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-12, 54, 12); glVertex3f(12, 54, 12);
    glVertex3f(15, 54, 15); glVertex3f(-15, 54, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-15, 54, 15); glVertex3f(15, 54, 15);
    glVertex3f(16, 55, 16); glVertex3f(-16, 55, 16);
    glEnd();

    //atap kiri
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(-7, 55, -7); glVertex3f(-7, 55, 7);
    glVertex3f(-12, 54, 12); glVertex3f(-12, 54, -12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-12, 54, -12); glVertex3f(-12, 54, 12);
    glVertex3f(-15, 54, 15); glVertex3f(-15, 54, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-15, 54, -15); glVertex3f(-15, 54, 15);
    glVertex3f(-16, 55, 16); glVertex3f(-16, 55, -16);
    glEnd();

    //atap kanan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(7, 55, -7); glVertex3f(7, 55, 7);
    glVertex3f(12, 54, 12); glVertex3f(12, 54, -12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(12, 54, -12); glVertex3f(12, 54, 12);
    glVertex3f(15, 54, 15); glVertex3f(15, 54, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(15, 54, -15); glVertex3f(15, 54, 15);
    glVertex3f(16, 55, 16); glVertex3f(16, 55, -16);
    glEnd();




    //puncak
   //atap pondasi puncak
    glBegin(GL_POLYGON);
    glColor3ub(165, 55, 88);
    glVertex3f(-2, 60, -2); glVertex3f(2, 60, -2);
    glVertex3f(2, 60, 2); glVertex3f(-2, 60, 2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(165, 55, 88);
    glVertex3f(-2, 61, -2); glVertex3f(2, 61, -2);
    glVertex3f(2, 61, 2); glVertex3f(-2, 61, 2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(165, 111, 88);
    glVertex3f(-2, 60, -2); glVertex3f(2, 60, -2);
    glVertex3f(2, 61, -2); glVertex3f(-2, 61, -2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(165, 111, 88);
    glVertex3f(-2, 60, 2); glVertex3f(2, 60, 2);
    glVertex3f(2, 61, 2); glVertex3f(-2, 61, 2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(165, 88, 88);
    glVertex3f(-2, 60, -2); glVertex3f(-2, 60, 2);
    glVertex3f(-2, 61, 2); glVertex3f(-2, 61, -2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(165, 88, 88);
    glVertex3f(2, 60, -2); glVertex3f(2, 60, 2);
    glVertex3f(2, 61, 2); glVertex3f(2, 61, -2);
    glEnd();

    //tiang puncak
    glBegin(GL_POLYGON);
    glColor3ub(165, 111, 88);
    glVertex3f(-0.5, 61, -0.5); glVertex3f(0.5, 61, -0.5);
    glVertex3f(0.5, 81, -0.5); glVertex3f(-0.5, 81, -0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(165, 111, 88);
    glVertex3f(-0.5, 61, 0.5); glVertex3f(0.5, 61, 0.5);
    glVertex3f(0.5, 81, 0.5); glVertex3f(-0.5, 81, 0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(165, 66, 66);
    glVertex3f(-0.5, 61, -0.5); glVertex3f(-0.5, 61, 0.5);
    glVertex3f(-0.5, 81, 0.5); glVertex3f(-0.5, 81, -0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(165, 66, 66);
    glVertex3f(0.5, 61, -0.5); glVertex3f(0.5, 61, 0.5);
    glVertex3f(0.5, 81, 0.5); glVertex3f(0.5, 81, -0.5);
    glEnd();

    //atap belakang
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(2, 60, -2); glVertex3f(-2, 60, -2);
    glVertex3f(-3, 58, -3); glVertex3f(3, 58, -3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-3, 58, -3); glVertex3f(3, 58, -3);
    glVertex3f(5, 56, -5); glVertex3f(-5, 56, -5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-5, 56, -5); glVertex3f(5, 56, -5);
    glVertex3f(7, 55, -7); glVertex3f(-7, 55, -7);
    glEnd();

    //atap depan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(2, 60, 2); glVertex3f(-2, 60, 2);
    glVertex3f(-3, 58, 3); glVertex3f(3, 58, 3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-3, 58, 3); glVertex3f(3, 58, 3);
    glVertex3f(5, 56, 5); glVertex3f(-5, 56, 5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-5, 56, 5); glVertex3f(5, 56, 5);
    glVertex3f(7, 55, 7); glVertex3f(-7, 55, 7);
    glEnd();

    //atap kiri
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(-2, 60, -2); glVertex3f(-2, 60, 2);
    glVertex3f(-3, 58, 3); glVertex3f(-3, 58, -3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(-3, 58, -3); glVertex3f(-3, 58, 3);
    glVertex3f(-5, 56, 5); glVertex3f(-5, 56, -5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-5, 56, -5); glVertex3f(-5, 56, 5);
    glVertex3f(-7, 55, 7); glVertex3f(-7, 55, -7);
    glEnd();

    //atap kanan
    glBegin(GL_POLYGON);
    glColor3ub(34, 53, 57);
    glVertex3f(2, 60, -2); glVertex3f(2, 60, 2);
    glVertex3f(3, 58, 3); glVertex3f(3, 58, -3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(56, 84, 96);
    glVertex3f(3, 58, -3); glVertex3f(3, 58, 3);
    glVertex3f(5, 56, 5); glVertex3f(5, 56, -5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(5, 56, -5); glVertex3f(5, 56, 5);
    glVertex3f(7, 55, 7); glVertex3f(7, 55, -7);
    glEnd();


    //dekorasi puncak 1
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 65, -2); glVertex3f(2, 65, -2);
    glVertex3f(0, 66, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 65, 2); glVertex3f(2, 65, 2);
    glVertex3f(0, 66, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 65, -2); glVertex3f(-2, 65, 2);
    glVertex3f(0, 66, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(2, 65, -2); glVertex3f(2, 65, 2);
    glVertex3f(0, 66, 0);
    glEnd();

    //dekorasi puncak 2
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 67, -2); glVertex3f(2, 67, -2);
    glVertex3f(0, 68, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 67, 2); glVertex3f(2, 67, 2);
    glVertex3f(0, 68, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 67, -2); glVertex3f(-2, 67, 2);
    glVertex3f(0, 68, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(2, 67, -2); glVertex3f(2, 67, 2);
    glVertex3f(0, 68, 0);
    glEnd();

    //dekorasi puncak 3
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 69, -2); glVertex3f(2, 69, -2);
    glVertex3f(0, 70, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 69, 2); glVertex3f(2, 69, 2);
    glVertex3f(0, 70, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 69, -2); glVertex3f(-2, 69, 2);
    glVertex3f(0, 70, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(2, 69, -2); glVertex3f(2, 69, 2);
    glVertex3f(0, 70, 0);
    glEnd();

    //dekorasi puncak 4
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 71, -2); glVertex3f(2, 71, -2);
    glVertex3f(0, 72, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 71, 2); glVertex3f(2, 71, 2);
    glVertex3f(0, 72, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 71, -2); glVertex3f(-2, 71, 2);
    glVertex3f(0, 72, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(2, 71, -2); glVertex3f(2, 71, 2);
    glVertex3f(0, 72, 0);
    glEnd();

    //dekorasi puncak 5
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 73, -2); glVertex3f(2, 73, -2);
    glVertex3f(0, 74, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 73, 2); glVertex3f(2, 73, 2);
    glVertex3f(0, 74, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 73, -2); glVertex3f(-2, 73, 2);
    glVertex3f(0, 74, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(2, 73, -2); glVertex3f(2, 73, 2);
    glVertex3f(0, 74, 0);
    glEnd();

    //dekorasi puncak 6
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 75, -2); glVertex3f(2, 75, -2);
    glVertex3f(0, 76, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 75, 2); glVertex3f(2, 75, 2);
    glVertex3f(0, 76, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 75, -2); glVertex3f(-2, 75, 2);
    glVertex3f(0, 76, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(2, 75, -2); glVertex3f(2, 75, 2);
    glVertex3f(0, 76, 0);
    glEnd();

    //dekorasi puncak 7
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 77, -2); glVertex3f(2, 77, -2);
    glVertex3f(0, 78, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 77, 2); glVertex3f(2, 77, 2);
    glVertex3f(0, 78, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-2, 77, -2); glVertex3f(-2, 77, 2);
    glVertex3f(0, 78, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(2, 77, -2); glVertex3f(2, 77, 2);
    glVertex3f(0, 78, 0);
    glEnd();

    //dekorasi puncak puncak
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-1, 80, -1); glVertex3f(1, 80, -1);
    glVertex3f(1, 80, 1); glVertex3f(-1, 80, 1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-0.5, 82, -0.5); glVertex3f(0.5, 82, -0.5);
    glVertex3f(0.5, 82, 0.5); glVertex3f(-0.5, 82, 0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-1, 80, -1); glVertex3f(1, 80, -1);
    glVertex3f(0.5, 82, -0.5); glVertex3f(-0.5, 82, -0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-1, 80, 1); glVertex3f(1, 80, 1);
    glVertex3f(0.5, 82, 0.5); glVertex3f(-0.5, 82, 0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(-1, 80, -1); glVertex3f(-1, 80, 1);
    glVertex3f(-0.5, 82, 0.5); glVertex3f(-0.5, 82, -0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(40, 106, 122);
    glVertex3f(1, 80, -1); glVertex3f(1, 80, 1);
    glVertex3f(0.5, 82, 0.5); glVertex3f(0.5, 82, -0.5);
    glEnd();


    //pagar merah belakang pondasi 1
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-16, 15.5, -15); glVertex3f(16, 15.5, -15);
    glVertex3f(16, 16, -15); glVertex3f(-16, 16, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-16, 15.5, -14.5); glVertex3f(16, 15.5, -14.5);
    glVertex3f(16, 16, -14.5); glVertex3f(-16, 16, -14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-16, 15.5, -14.5); glVertex3f(16, 15.5, -14.5);
    glVertex3f(16, 15.5, -15); glVertex3f(-16, 15.5, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-16, 16, -14.5); glVertex3f(16, 16, -14.5);
    glVertex3f(16, 16, -15); glVertex3f(-16, 16, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-17, 16.5, -15); glVertex3f(17, 16.5, -15);
    glVertex3f(17, 17, -15); glVertex3f(-17, 17, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-17, 16.5, -14.5); glVertex3f(17, 16.5, -14.5);
    glVertex3f(17, 17, -14.5); glVertex3f(-17, 17, -14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-17, 16.5, -14.5); glVertex3f(17, 16.5, -14.5);
    glVertex3f(17, 16.5, -15); glVertex3f(-17, 16.5, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-17, 17, -14.5); glVertex3f(17, 17, -14.5);
    glVertex3f(17, 17, -15); glVertex3f(-17, 17, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-18, 17.5, -15); glVertex3f(18, 17.5, -15);
    glVertex3f(18, 18, -15); glVertex3f(-18, 18, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-18, 17.5, -14.5); glVertex3f(18, 17.5, -14.5);
    glVertex3f(18, 18, -14.5); glVertex3f(-18, 18, -14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-18, 17.5, -14.5); glVertex3f(18, 17.5, -14.5);
    glVertex3f(18, 17.5, -15); glVertex3f(-18, 17.5, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-18, 18, -14.5); glVertex3f(18, 18, -14.5);
    glVertex3f(18, 18, -15); glVertex3f(-18, 18, -15);
    glEnd();


    //pagar merah depan pondasi 1
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-16, 15.5, 15); glVertex3f(16, 15.5, 15);
    glVertex3f(16, 16, 15); glVertex3f(-16, 16, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-16, 15.5, 14.5); glVertex3f(16, 15.5, 14.5);
    glVertex3f(16, 16, 14.5); glVertex3f(-16, 16, 14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-16, 15.5, 14.5); glVertex3f(16, 15.5, 14.5);
    glVertex3f(16, 15.5, 15); glVertex3f(-16, 15.5, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-16, 16, 14.5); glVertex3f(16, 16, 14.5);
    glVertex3f(16, 16, 15); glVertex3f(-16, 16, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-17, 16.5, 15); glVertex3f(17, 16.5, 15);
    glVertex3f(17, 17, 15); glVertex3f(-17, 17, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-17, 16.5, 14.5); glVertex3f(17, 16.5, 14.5);
    glVertex3f(17, 17, 14.5); glVertex3f(-17, 17, 14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-17, 16.5, 14.5); glVertex3f(17, 16.5, 14.5);
    glVertex3f(17, 16.5, 15); glVertex3f(-17, 16.5, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-17, 17, 14.5); glVertex3f(17, 17, 14.5);
    glVertex3f(17, 17, 15); glVertex3f(-17, 17, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-18, 17.5, 15); glVertex3f(18, 17.5, 15);
    glVertex3f(18, 18, 15); glVertex3f(-18, 18, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-18, 17.5, 14.5); glVertex3f(18, 17.5, 14.5);
    glVertex3f(18, 18, 14.5); glVertex3f(-18, 18, 14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-18, 17.5, 14.5); glVertex3f(18, 17.5, 14.5);
    glVertex3f(18, 17.5, 15); glVertex3f(-18, 17.5, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-18, 18, 14.5); glVertex3f(18, 18, 14.5);
    glVertex3f(18, 18, 15); glVertex3f(-18, 18, 15);
    glEnd();


    //pagar merah kiri pondasi 1
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-15, 15.5, 16); glVertex3f(-15, 15.5, -16);
    glVertex3f(-15, 16, -16); glVertex3f(-15, 16, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-14.5, 15.5, 16); glVertex3f(-14.5, 15.5, -16);
    glVertex3f(-14.5, 16, -16); glVertex3f(-14.5, 16, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-14.5, 15.5, 16); glVertex3f(-14.5, 15.5, -16);
    glVertex3f(-15, 15.5, -16); glVertex3f(-15, 15.5, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-14.5, 16, 16); glVertex3f(-14.5, 16, -16);
    glVertex3f(-15, 16, -16); glVertex3f(-15, 16, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-15, 16.5, 17); glVertex3f(-15, 16.5, -17);
    glVertex3f(-15, 17, -17); glVertex3f(-15, 17, 17);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-14.5, 16.5, 17); glVertex3f(-14.5, 16.5, -17);
    glVertex3f(-14.5, 17, -17); glVertex3f(-14.5, 17, 17);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-14.5, 16.5, 17); glVertex3f(-14.5, 16.5, -17);
    glVertex3f(-15, 16.5, -17); glVertex3f(-15, 16.5, 17);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-14.5, 17, 17); glVertex3f(-14.5, 17, -17);
    glVertex3f(-15, 17, -17); glVertex3f(-15, 17, 17);
    glEnd(); glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-15, 17.5, 18); glVertex3f(-15, 17.5, -18);
    glVertex3f(-15, 18, -18); glVertex3f(-15, 18, 18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-14.5, 17.5, 18); glVertex3f(-14.5, 17.5, -18);
    glVertex3f(-14.5, 18, -18); glVertex3f(-14.5, 18, 18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-14.5, 17.5, 18); glVertex3f(-14.5, 17.5, -18);
    glVertex3f(-15, 17.5, -18); glVertex3f(-15, 17.5, 18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-14.5, 18, 18); glVertex3f(-14.5, 18, -18);
    glVertex3f(-15, 18, -18); glVertex3f(-15, 18, 18);
    glEnd();

    //pagar merah kanan pondasi 1
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(15, 15.5, 16); glVertex3f(15, 15.5, -16);
    glVertex3f(15, 16, -16); glVertex3f(15, 16, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-14.5, 15.5, 16); glVertex3f(-14.5, 15.5, -16);
    glVertex3f(-14.5, 16, -16); glVertex3f(-14.5, 16, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(14.5, 15.5, 16); glVertex3f(14.5, 15.5, -16);
    glVertex3f(15, 15.5, -16); glVertex3f(15, 15.5, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(14.5, 16, 16); glVertex3f(14.5, 16, -16);
    glVertex3f(15, 16, -16); glVertex3f(15, 16, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(15, 16.5, 17); glVertex3f(15, 16.5, -17);
    glVertex3f(15, 17, -17); glVertex3f(15, 17, 17);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-14.5, 16.5, 17); glVertex3f(-14.5, 16.5, -17);
    glVertex3f(-14.5, 17, -17); glVertex3f(-14.5, 17, 17);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(14.5, 16.5, 17); glVertex3f(14.5, 16.5, -17);
    glVertex3f(15, 16.5, -17); glVertex3f(15, 16.5, 17);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(14.5, 17, 17); glVertex3f(14.5, 17, -17);
    glVertex3f(15, 17, -17); glVertex3f(15, 17, 17);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(15, 17.5, 18); glVertex3f(15, 17.5, -18);
    glVertex3f(15, 18, -18); glVertex3f(15, 18, 18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-14.5, 17.5, 18); glVertex3f(-14.5, 17.5, -18);
    glVertex3f(-14.5, 18, -18); glVertex3f(-14.5, 18, 18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(14.5, 17.5, 18); glVertex3f(14.5, 17.5, -18);
    glVertex3f(15, 17.5, -18); glVertex3f(15, 17.5, 18);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(14.5, 18, 18); glVertex3f(14.5, 18, -18);
    glVertex3f(15, 18, -18); glVertex3f(15, 18, 18);
    glEnd();

    //tiang pagarnya
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-15, 15, -15); glVertex3f(-14.5, 15, -15);
    glVertex3f(-14.5, 18, -15); glVertex3f(-15, 18, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-15, 15, -14.5); glVertex3f(-14.5, 15, -14.5);
    glVertex3f(-14.5, 18, -14.5); glVertex3f(-15, 18, -14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-15, 15, -14.5); glVertex3f(-15, 15, -15);
    glVertex3f(-15, 18, -15); glVertex3f(-15, 18, -14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-14.5, 15, -14.5); glVertex3f(-14.5, 15, -15);
    glVertex3f(-14.5, 18, -15); glVertex3f(-14.5, 18, -14.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(15, 15, -15); glVertex3f(14.5, 15, -15);
    glVertex3f(14.5, 18, -15); glVertex3f(15, 18, -15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(15, 15, -14.5); glVertex3f(14.5, 15, -14.5);
    glVertex3f(14.5, 18, -14.5); glVertex3f(15, 18, -14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(15, 15, -14.5); glVertex3f(15, 15, -15);
    glVertex3f(15, 18, -15); glVertex3f(15, 18, -14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(14.5, 15, -14.5); glVertex3f(14.5, 15, -15);
    glVertex3f(14.5, 18, -15); glVertex3f(14.5, 18, -14.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-15, 15, 15); glVertex3f(-14.5, 15, 15);
    glVertex3f(-14.5, 18, 15); glVertex3f(-15, 18, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-15, 15, 14.5); glVertex3f(-14.5, 15, 14.5);
    glVertex3f(-14.5, 18, 14.5); glVertex3f(-15, 18, 14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-15, 15, 14.5); glVertex3f(-15, 15, 15);
    glVertex3f(-15, 18, 15); glVertex3f(-15, 18, 14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-14.5, 15, 14.5); glVertex3f(-14.5, 15, 15);
    glVertex3f(-14.5, 18, 15); glVertex3f(-14.5, 18, 14.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(15, 15, 15); glVertex3f(14.5, 15, 15);
    glVertex3f(14.5, 18, 15); glVertex3f(15, 18, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(15, 15, 14.5); glVertex3f(14.5, 15, 14.5);
    glVertex3f(14.5, 18, 14.5); glVertex3f(15, 18, 14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(15, 15, 14.5); glVertex3f(15, 15, 15);
    glVertex3f(15, 18, 15); glVertex3f(15, 18, 14.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(14.5, 15, 14.5); glVertex3f(14.5, 15, 15);
    glVertex3f(14.5, 18, 15); glVertex3f(14.5, 18, 14.5);
    glEnd();



    //pagar merah belakang pondasi 2
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-14, 28.5, -13); glVertex3f(14, 28.5, -13);
    glVertex3f(14, 29, -13); glVertex3f(-14, 29, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-14, 28.5, -12.5); glVertex3f(14, 28.5, -12.5);
    glVertex3f(14, 29, -12.5); glVertex3f(-14, 29, -12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-14, 28.5, -12.5); glVertex3f(14, 28.5, -12.5);
    glVertex3f(14, 28.5, -13); glVertex3f(-14, 28.5, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-14, 29, -12.5); glVertex3f(14, 29, -12.5);
    glVertex3f(14, 29, -13); glVertex3f(-14, 29, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-15, 29.5, -13); glVertex3f(15, 29.5, -13);
    glVertex3f(15, 30, -13); glVertex3f(-15, 30, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-15, 29.5, -12.5); glVertex3f(15, 29.5, -12.5);
    glVertex3f(15, 30, -12.5); glVertex3f(-15, 30, -12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-15, 29.5, -12.5); glVertex3f(15, 29.5, -12.5);
    glVertex3f(15, 29.5, -13); glVertex3f(-15, 29.5, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-15, 30, -12.5); glVertex3f(15, 30, -12.5);
    glVertex3f(15, 30, -13); glVertex3f(-15, 30, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-16, 30.5, -13); glVertex3f(16, 30.5, -13);
    glVertex3f(16, 31, -13); glVertex3f(-16, 31, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-16, 30.5, -12.5); glVertex3f(16, 30.5, -12.5);
    glVertex3f(16, 31, -12.5); glVertex3f(-16, 31, -12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-16, 30.5, -12.5); glVertex3f(16, 30.5, -12.5);
    glVertex3f(16, 30.5, -13); glVertex3f(-16, 30.5, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-16, 31, -12.5); glVertex3f(16, 31, -12.5);
    glVertex3f(16, 31, -13); glVertex3f(-16, 31, -13);
    glEnd();


    //pagar merah depan pondasi 2
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-14, 28.5, 13); glVertex3f(14, 28.5, 13);
    glVertex3f(14, 29, 13); glVertex3f(-14, 29, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-14, 28.5, 12.5); glVertex3f(14, 28.5, 12.5);
    glVertex3f(14, 29, 12.5); glVertex3f(-14, 29, 12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-14, 28.5, 12.5); glVertex3f(14, 28.5, 12.5);
    glVertex3f(14, 28.5, 13); glVertex3f(-14, 28.5, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-14, 29, 12.5); glVertex3f(14, 29, 12.5);
    glVertex3f(14, 29, 13); glVertex3f(-14, 29, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-15, 29.5, 13); glVertex3f(15, 29.5, 13);
    glVertex3f(15, 30, 13); glVertex3f(-15, 30, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-15, 29.5, 12.5); glVertex3f(15, 29.5, 12.5);
    glVertex3f(15, 30, 12.5); glVertex3f(-15, 30, 12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-15, 29.5, 12.5); glVertex3f(15, 29.5, 12.5);
    glVertex3f(15, 29.5, 13); glVertex3f(-15, 29.5, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-15, 30, 12.5); glVertex3f(15, 30, 12.5);
    glVertex3f(15, 30, 13); glVertex3f(-15, 30, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-16, 30.5, 13); glVertex3f(16, 30.5, 13);
    glVertex3f(16, 31, 13); glVertex3f(-16, 31, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-16, 30.5, 12.5); glVertex3f(16, 30.5, 12.5);
    glVertex3f(16, 31, 12.5); glVertex3f(-16, 31, 12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-16, 30.5, 12.5); glVertex3f(16, 30.5, 12.5);
    glVertex3f(16, 30.5, 13); glVertex3f(-16, 30.5, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-16, 31, 12.5); glVertex3f(16, 31, 12.5);
    glVertex3f(16, 31, 13); glVertex3f(-16, 31, 13);
    glEnd();




    //pagar merah kiri pondasi 2
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-13, 28.5, 14); glVertex3f(-13, 28.5, -14);
    glVertex3f(-13, 29, -14); glVertex3f(-13, 29, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-12.5, 28.5, 14); glVertex3f(-12.5, 28.5, -14);
    glVertex3f(-12.5, 29, -14); glVertex3f(-12.5, 29, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-12.5, 28.5, 14); glVertex3f(-12.5, 28.5, -14);
    glVertex3f(-13, 28.5, -14); glVertex3f(-13, 28.5, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-12.5, 29, 14); glVertex3f(-12.5, 29, -14);
    glVertex3f(-13, 29, -14); glVertex3f(-13, 29, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-13, 29.5, 15); glVertex3f(-13, 29.5, -15);
    glVertex3f(-13, 30, -15); glVertex3f(-13, 30, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-12.5, 29.5, 15); glVertex3f(-12.5, 29.5, -15);
    glVertex3f(-12.5, 30, -15); glVertex3f(-12.5, 30, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-12.5, 29.5, 15); glVertex3f(-12.5, 29.5, -15);
    glVertex3f(-13, 29.5, -15); glVertex3f(-13, 29.5, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-12.5, 30, 15); glVertex3f(-12.5, 30, -15);
    glVertex3f(-13, 30, -15); glVertex3f(-13, 30, 15);
    glEnd(); glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-13, 30.5, 16); glVertex3f(-13, 30.5, -16);
    glVertex3f(-13, 31, -16); glVertex3f(-13, 31, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-12.5, 30.5, 16); glVertex3f(-12.5, 30.5, -16);
    glVertex3f(-12.5, 31, -16); glVertex3f(-12.5, 31, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-12.5, 30.5, 16); glVertex3f(-12.5, 30.5, -16);
    glVertex3f(-13, 30.5, -16); glVertex3f(-13, 30.5, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-12.5, 31, 16); glVertex3f(-12.5, 31, -16);
    glVertex3f(-13, 31, -16); glVertex3f(-13, 31, 16);
    glEnd();

    //pagar merah kanan pondasi 2
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(13, 28.5, 14); glVertex3f(13, 28.5, -14);
    glVertex3f(13, 29, -14); glVertex3f(13, 29, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-12.5, 28.5, 14); glVertex3f(-12.5, 28.5, -14);
    glVertex3f(-12.5, 29, -14); glVertex3f(-12.5, 29, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(12.5, 28.5, 14); glVertex3f(12.5, 28.5, -14);
    glVertex3f(13, 28.5, -14); glVertex3f(13, 28.5, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(12.5, 29, 14); glVertex3f(12.5, 29, -14);
    glVertex3f(13, 29, -14); glVertex3f(13, 29, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(13, 29.5, 15); glVertex3f(13, 29.5, -15);
    glVertex3f(13, 30, -15); glVertex3f(13, 30, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-12.5, 29.5, 15); glVertex3f(-12.5, 29.5, -15);
    glVertex3f(-12.5, 30, -15); glVertex3f(-12.5, 30, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(12.5, 29.5, 15); glVertex3f(12.5, 29.5, -15);
    glVertex3f(13, 29.5, -15); glVertex3f(13, 29.5, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(12.5, 30, 15); glVertex3f(12.5, 30, -15);
    glVertex3f(13, 30, -15); glVertex3f(13, 30, 15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(13, 30.5, 16); glVertex3f(13, 30.5, -16);
    glVertex3f(13, 31, -16); glVertex3f(13, 31, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-12.5, 30.5, 16); glVertex3f(-12.5, 30.5, -16);
    glVertex3f(-12.5, 31, -16); glVertex3f(-12.5, 31, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(12.5, 30.5, 16); glVertex3f(12.5, 30.5, -16);
    glVertex3f(13, 30.5, -16); glVertex3f(13, 30.5, 16);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(12.5, 31, 16); glVertex3f(12.5, 31, -16);
    glVertex3f(13, 31, -16); glVertex3f(13, 31, 16);
    glEnd();

    //tiang pagarnya
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-13, 28, -13); glVertex3f(-12.5, 28, -13);
    glVertex3f(-12.5, 31, -13); glVertex3f(-13, 31, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-13, 28, -12.5); glVertex3f(-12.5, 28, -12.5);
    glVertex3f(-12.5, 31, -12.5); glVertex3f(-13, 31, -12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-13, 28, -12.5); glVertex3f(-13, 28, -13);
    glVertex3f(-13, 31, -13); glVertex3f(-13, 31, -12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-12.5, 28, -12.5); glVertex3f(-12.5, 28, -13);
    glVertex3f(-12.5, 31, -13); glVertex3f(-12.5, 31, -12.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(13, 28, -13); glVertex3f(12.5, 28, -13);
    glVertex3f(12.5, 31, -13); glVertex3f(13, 31, -13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(13, 28, -12.5); glVertex3f(12.5, 28, -12.5);
    glVertex3f(12.5, 31, -12.5); glVertex3f(13, 31, -12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(13, 28, -12.5); glVertex3f(13, 28, -13);
    glVertex3f(13, 31, -13); glVertex3f(13, 31, -12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(12.5, 28, -12.5); glVertex3f(12.5, 28, -13);
    glVertex3f(12.5, 31, -13); glVertex3f(12.5, 31, -12.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-13, 28, 13); glVertex3f(-12.5, 28, 13);
    glVertex3f(-12.5, 31, 13); glVertex3f(-13, 31, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-13, 28, 12.5); glVertex3f(-12.5, 28, 12.5);
    glVertex3f(-12.5, 31, 12.5); glVertex3f(-13, 31, 12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-13, 28, 12.5); glVertex3f(-13, 28, 13);
    glVertex3f(-13, 31, 13); glVertex3f(-13, 31, 12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-12.5, 28, 12.5); glVertex3f(-12.5, 28, 13);
    glVertex3f(-12.5, 31, 13); glVertex3f(-12.5, 31, 12.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(13, 28, 13); glVertex3f(12.5, 28, 13);
    glVertex3f(12.5, 31, 13); glVertex3f(13, 31, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(13, 28, 12.5); glVertex3f(12.5, 28, 12.5);
    glVertex3f(12.5, 31, 12.5); glVertex3f(13, 31, 12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(13, 28, 12.5); glVertex3f(13, 28, 13);
    glVertex3f(13, 31, 13); glVertex3f(13, 31, 12.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(12.5, 28, 12.5); glVertex3f(12.5, 28, 13);
    glVertex3f(12.5, 31, 13); glVertex3f(12.5, 31, 12.5);
    glEnd();

    //pagar merah belakang pondasi 3
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-12, 39.5, -11); glVertex3f(12, 39.5, -11);
    glVertex3f(12, 40, -11); glVertex3f(-12, 40, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-12, 39.5, -10.5); glVertex3f(12, 39.5, -10.5);
    glVertex3f(12, 40, -10.5); glVertex3f(-12, 40, -10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-12, 39.5, -10.5); glVertex3f(12, 39.5, -10.5);
    glVertex3f(12, 39.5, -11); glVertex3f(-12, 39.5, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-12, 40, -10.5); glVertex3f(12, 40, -10.5);
    glVertex3f(12, 40, -11); glVertex3f(-12, 40, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-13, 40.5, -11); glVertex3f(13, 40.5, -11);
    glVertex3f(13, 41, -11); glVertex3f(-13, 41, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-13, 40.5, -10.5); glVertex3f(13, 40.5, -10.5);
    glVertex3f(13, 41, -10.5); glVertex3f(-13, 41, -10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-13, 40.5, -10.5); glVertex3f(13, 40.5, -10.5);
    glVertex3f(13, 40.5, -11); glVertex3f(-13, 40.5, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-13, 41, -10.5); glVertex3f(13, 41, -10.5);
    glVertex3f(13, 41, -11); glVertex3f(-13, 41, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-14, 41.5, -11); glVertex3f(14, 41.5, -11);
    glVertex3f(14, 42, -11); glVertex3f(-14, 42, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-14, 41.5, -10.5); glVertex3f(14, 41.5, -10.5);
    glVertex3f(14, 42, -10.5); glVertex3f(-14, 42, -10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-14, 41.5, -10.5); glVertex3f(14, 41.5, -10.5);
    glVertex3f(14, 41.5, -11); glVertex3f(-14, 41.5, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-14, 42, -10.5); glVertex3f(14, 42, -10.5);
    glVertex3f(14, 42, -11); glVertex3f(-14, 42, -11);
    glEnd();


    //pagar merah depan pondasi 3
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-12, 39.5, 11); glVertex3f(12, 39.5, 11);
    glVertex3f(12, 40, 11); glVertex3f(-12, 40, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-12, 39.5, 10.5); glVertex3f(12, 39.5, 10.5);
    glVertex3f(12, 40, 10.5); glVertex3f(-12, 40, 10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-12, 39.5, 10.5); glVertex3f(12, 39.5, 10.5);
    glVertex3f(12, 39.5, 11); glVertex3f(-12, 39.5, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-12, 40, 10.5); glVertex3f(12, 40, 10.5);
    glVertex3f(12, 40, 11); glVertex3f(-12, 40, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-13, 40.5, 11); glVertex3f(13, 40.5, 11);
    glVertex3f(13, 41, 11); glVertex3f(-13, 41, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-13, 40.5, 10.5); glVertex3f(13, 40.5, 10.5);
    glVertex3f(13, 41, 10.5); glVertex3f(-13, 41, 10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-13, 40.5, 10.5); glVertex3f(13, 40.5, 10.5);
    glVertex3f(13, 40.5, 11); glVertex3f(-13, 40.5, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-13, 41, 10.5); glVertex3f(13, 41, 10.5);
    glVertex3f(13, 41, 11); glVertex3f(-13, 41, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-14, 41.5, 11); glVertex3f(14, 41.5, 11);
    glVertex3f(14, 42, 11); glVertex3f(-14, 42, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-14, 41.5, 10.5); glVertex3f(14, 41.5, 10.5);
    glVertex3f(14, 42, 10.5); glVertex3f(-14, 42, 10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-14, 41.5, 10.5); glVertex3f(14, 41.5, 10.5);
    glVertex3f(14, 41.5, 11); glVertex3f(-14, 41.5, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-14, 42, 10.5); glVertex3f(14, 42, 10.5);
    glVertex3f(14, 42, 11); glVertex3f(-14, 42, 11);
    glEnd();




    //pagar merah kiri pondasi 3
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-11, 39.5, 12); glVertex3f(-11, 39.5, -12);
    glVertex3f(-11, 40, -12); glVertex3f(-11, 40, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-10.5, 39.5, 12); glVertex3f(-10.5, 39.5, -12);
    glVertex3f(-10.5, 40, -12); glVertex3f(-10.5, 40, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-10.5, 39.5, 12); glVertex3f(-10.5, 39.5, -12);
    glVertex3f(-11, 39.5, -12); glVertex3f(-11, 39.5, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-10.5, 40, 12); glVertex3f(-10.5, 40, -12);
    glVertex3f(-11, 40, -12); glVertex3f(-11, 40, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-11, 40.5, 13); glVertex3f(-11, 40.5, -13);
    glVertex3f(-11, 41, -13); glVertex3f(-11, 41, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-10.5, 40.5, 13); glVertex3f(-10.5, 40.5, -13);
    glVertex3f(-10.5, 41, -13); glVertex3f(-10.5, 41, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-10.5, 40.5, 13); glVertex3f(-10.5, 40.5, -13);
    glVertex3f(-11, 40.5, -13); glVertex3f(-11, 40.5, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-10.5, 41, 13); glVertex3f(-10.5, 41, -13);
    glVertex3f(-11, 41, -13); glVertex3f(-11, 41, 13);
    glEnd(); glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-11, 41.5, 14); glVertex3f(-11, 41.5, -14);
    glVertex3f(-11, 42, -14); glVertex3f(-11, 42, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-10.5, 41.5, 14); glVertex3f(-10.5, 41.5, -14);
    glVertex3f(-10.5, 42, -14); glVertex3f(-10.5, 42, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-10.5, 41.5, 14); glVertex3f(-10.5, 41.5, -14);
    glVertex3f(-11, 41.5, -14); glVertex3f(-11, 41.5, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-10.5, 42, 14); glVertex3f(-10.5, 42, -14);
    glVertex3f(-11, 42, -14); glVertex3f(-11, 42, 14);
    glEnd();

    //pagar merah kanan pondasi 3
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(11, 39.5, 12); glVertex3f(11, 39.5, -12);
    glVertex3f(11, 40, -12); glVertex3f(11, 40, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-10.5, 39.5, 12); glVertex3f(-10.5, 39.5, -12);
    glVertex3f(-10.5, 40, -12); glVertex3f(-10.5, 40, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(10.5, 39.5, 12); glVertex3f(10.5, 39.5, -12);
    glVertex3f(11, 39.5, -12); glVertex3f(11, 39.5, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(10.5, 40, 12); glVertex3f(10.5, 40, -12);
    glVertex3f(11, 40, -12); glVertex3f(11, 40, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(11, 40.5, 13); glVertex3f(11, 40.5, -13);
    glVertex3f(11, 41, -13); glVertex3f(11, 41, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-10.5, 40.5, 13); glVertex3f(-10.5, 40.5, -13);
    glVertex3f(-10.5, 41, -13); glVertex3f(-10.5, 41, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(10.5, 40.5, 13); glVertex3f(10.5, 40.5, -13);
    glVertex3f(11, 40.5, -13); glVertex3f(11, 40.5, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(10.5, 41, 13); glVertex3f(10.5, 41, -13);
    glVertex3f(11, 41, -13); glVertex3f(11, 41, 13);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(11, 41.5, 14); glVertex3f(11, 41.5, -14);
    glVertex3f(11, 42, -14); glVertex3f(11, 42, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-10.5, 41.5, 14); glVertex3f(-10.5, 41.5, -14);
    glVertex3f(-10.5, 42, -14); glVertex3f(-10.5, 42, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(10.5, 41.5, 14); glVertex3f(10.5, 41.5, -14);
    glVertex3f(11, 41.5, -14); glVertex3f(11, 41.5, 14);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(10.5, 42, 14); glVertex3f(10.5, 42, -14);
    glVertex3f(11, 42, -14); glVertex3f(11, 42, 14);
    glEnd();

    //tiang pagarnya
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-11, 39, -11); glVertex3f(-10.5, 39, -11);
    glVertex3f(-10.5, 42, -11); glVertex3f(-11, 42, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-11, 39, -10.5); glVertex3f(-10.5, 39, -10.5);
    glVertex3f(-10.5, 42, -10.5); glVertex3f(-11, 42, -10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-11, 39, -10.5); glVertex3f(-11, 39, -11);
    glVertex3f(-11, 42, -11); glVertex3f(-11, 42, -10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-10.5, 39, -10.5); glVertex3f(-10.5, 39, -11);
    glVertex3f(-10.5, 42, -11); glVertex3f(-10.5, 42, -10.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(11, 39, -11); glVertex3f(10.5, 39, -11);
    glVertex3f(10.5, 42, -11); glVertex3f(11, 42, -11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(11, 39, -10.5); glVertex3f(10.5, 39, -10.5);
    glVertex3f(10.5, 42, -10.5); glVertex3f(11, 42, -10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(11, 39, -10.5); glVertex3f(11, 39, -11);
    glVertex3f(11, 42, -11); glVertex3f(11, 42, -10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(10.5, 39, -10.5); glVertex3f(10.5, 39, -11);
    glVertex3f(10.5, 42, -11); glVertex3f(10.5, 42, -10.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-11, 39, 11); glVertex3f(-10.5, 39, 11);
    glVertex3f(-10.5, 42, 11); glVertex3f(-11, 42, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-11, 39, 10.5); glVertex3f(-10.5, 39, 10.5);
    glVertex3f(-10.5, 42, 10.5); glVertex3f(-11, 42, 10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-11, 39, 10.5); glVertex3f(-11, 39, 11);
    glVertex3f(-11, 42, 11); glVertex3f(-11, 42, 10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-10.5, 39, 10.5); glVertex3f(-10.5, 39, 11);
    glVertex3f(-10.5, 42, 11); glVertex3f(-10.5, 42, 10.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(11, 39, 11); glVertex3f(10.5, 39, 11);
    glVertex3f(10.5, 42, 11); glVertex3f(11, 42, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(11, 39, 10.5); glVertex3f(10.5, 39, 10.5);
    glVertex3f(10.5, 42, 10.5); glVertex3f(11, 42, 10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(11, 39, 10.5); glVertex3f(11, 39, 11);
    glVertex3f(11, 42, 11); glVertex3f(11, 42, 10.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(10.5, 39, 10.5); glVertex3f(10.5, 39, 11);
    glVertex3f(10.5, 42, 11); glVertex3f(10.5, 42, 10.5);
    glEnd();

    //pagar merah belakang pondasi 4
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-10, 48.5, -9); glVertex3f(10, 48.5, -9);
    glVertex3f(10, 49, -9); glVertex3f(-10, 49, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-10, 48.5, -8.5); glVertex3f(10, 48.5, -8.5);
    glVertex3f(10, 49, -8.5); glVertex3f(-10, 49, -8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-10, 48.5, -8.5); glVertex3f(10, 48.5, -8.5);
    glVertex3f(10, 48.5, -9); glVertex3f(-10, 48.5, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-10, 49, -8.5); glVertex3f(10, 49, -8.5);
    glVertex3f(10, 49, -9); glVertex3f(-10, 49, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-11, 49.5, -9); glVertex3f(11, 49.5, -9);
    glVertex3f(11, 50, -9); glVertex3f(-11, 50, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-11, 49.5, -8.5); glVertex3f(11, 49.5, -8.5);
    glVertex3f(11, 50, -8.5); glVertex3f(-11, 50, -8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-11, 49.5, -8.5); glVertex3f(11, 49.5, -8.5);
    glVertex3f(11, 49.5, -9); glVertex3f(-11, 49.5, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-11, 50, -8.5); glVertex3f(11, 50, -8.5);
    glVertex3f(11, 50, -9); glVertex3f(-11, 50, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-12, 50.5, -9); glVertex3f(12, 50.5, -9);
    glVertex3f(12, 51, -9); glVertex3f(-12, 51, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-12, 50.5, -8.5); glVertex3f(12, 50.5, -8.5);
    glVertex3f(12, 51, -8.5); glVertex3f(-12, 51, -8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-12, 50.5, -8.5); glVertex3f(12, 50.5, -8.5);
    glVertex3f(12, 50.5, -9); glVertex3f(-12, 50.5, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-12, 51, -8.5); glVertex3f(12, 51, -8.5);
    glVertex3f(12, 51, -9); glVertex3f(-12, 51, -9);
    glEnd();




    //pagar merah depan pondasi 4
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-10, 48.5, 9); glVertex3f(10, 48.5, 9);
    glVertex3f(10, 49, 9); glVertex3f(-10, 49, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-10, 48.5, 8.5); glVertex3f(10, 48.5, 8.5);
    glVertex3f(10, 49, 8.5); glVertex3f(-10, 49, 8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-10, 48.5, 8.5); glVertex3f(10, 48.5, 8.5);
    glVertex3f(10, 48.5, 9); glVertex3f(-10, 48.5, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-10, 49, 8.5); glVertex3f(10, 49, 8.5);
    glVertex3f(10, 49, 9); glVertex3f(-10, 49, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-11, 49.5, 9); glVertex3f(11, 49.5, 9);
    glVertex3f(11, 50, 9); glVertex3f(-11, 50, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-11, 49.5, 8.5); glVertex3f(11, 49.5, 8.5);
    glVertex3f(11, 50, 8.5); glVertex3f(-11, 50, 8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-11, 49.5, 8.5); glVertex3f(11, 49.5, 8.5);
    glVertex3f(11, 49.5, 9); glVertex3f(-11, 49.5, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-11, 50, 8.5); glVertex3f(11, 50, 8.5);
    glVertex3f(11, 50, 9); glVertex3f(-11, 50, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-12, 50.5, 9); glVertex3f(12, 50.5, 9);
    glVertex3f(12, 51, 9); glVertex3f(-12, 51, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-12, 50.5, 8.5); glVertex3f(12, 50.5, 8.5);
    glVertex3f(12, 51, 8.5); glVertex3f(-12, 51, 8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-12, 50.5, 8.5); glVertex3f(12, 50.5, 8.5);
    glVertex3f(12, 50.5, 9); glVertex3f(-12, 50.5, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-12, 51, 8.5); glVertex3f(12, 51, 8.5);
    glVertex3f(12, 51, 9); glVertex3f(-12, 51, 9);
    glEnd();

    //pagar merah kiri pondasi 4
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-9, 48.5, 10); glVertex3f(-9, 48.5, -10);
    glVertex3f(-9, 49, -10); glVertex3f(-9, 49, 10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-8.5, 48.5, 10); glVertex3f(-8.5, 48.5, -10);
    glVertex3f(-8.5, 49, -10); glVertex3f(-8.5, 49, 10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-8.5, 48.5, 10); glVertex3f(-8.5, 48.5, -10);
    glVertex3f(-9, 48.5, -10); glVertex3f(-9, 48.5, 10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-8.5, 49, 10); glVertex3f(-8.5, 49, -10);
    glVertex3f(-9, 49, -10); glVertex3f(-9, 49, 10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-9, 49.5, 11); glVertex3f(-9, 49.5, -11);
    glVertex3f(-9, 50, -11); glVertex3f(-9, 50, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-8.5, 49.5, 11); glVertex3f(-8.5, 49.5, -11);
    glVertex3f(-8.5, 50, -11); glVertex3f(-8.5, 50, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-8.5, 49.5, 11); glVertex3f(-8.5, 49.5, -11);
    glVertex3f(-9, 49.5, -11); glVertex3f(-9, 49.5, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-8.5, 50, 11); glVertex3f(-8.5, 50, -11);
    glVertex3f(-9, 50, -11); glVertex3f(-9, 50, 11);
    glEnd(); glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-9, 50.5, 12); glVertex3f(-9, 50.5, -12);
    glVertex3f(-9, 51, -12); glVertex3f(-9, 51, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-8.5, 50.5, 12); glVertex3f(-8.5, 50.5, -12);
    glVertex3f(-8.5, 51, -12); glVertex3f(-8.5, 51, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-8.5, 50.5, 12); glVertex3f(-8.5, 50.5, -12);
    glVertex3f(-9, 50.5, -12); glVertex3f(-9, 50.5, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-8.5, 51, 12); glVertex3f(-8.5, 51, -12);
    glVertex3f(-9, 51, -12); glVertex3f(-9, 51, 12);
    glEnd();

    //pagar merah kanan pondasi 4
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(9, 48.5, 10); glVertex3f(9, 48.5, -10);
    glVertex3f(9, 49, -10); glVertex3f(9, 49, 10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-8.5, 48.5, 10); glVertex3f(-8.5, 48.5, -10);
    glVertex3f(-8.5, 49, -10); glVertex3f(-8.5, 49, 10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(8.5, 48.5, 10); glVertex3f(8.5, 48.5, -10);
    glVertex3f(9, 48.5, -10); glVertex3f(9, 48.5, 10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(8.5, 49, 10); glVertex3f(8.5, 49, -10);
    glVertex3f(9, 49, -10); glVertex3f(9, 49, 10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(9, 49.5, 11); glVertex3f(9, 49.5, -11);
    glVertex3f(9, 50, -11); glVertex3f(9, 50, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-8.5, 49.5, 11); glVertex3f(-8.5, 49.5, -11);
    glVertex3f(-8.5, 50, -11); glVertex3f(-8.5, 50, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(8.5, 49.5, 11); glVertex3f(8.5, 49.5, -11);
    glVertex3f(9, 49.5, -11); glVertex3f(9, 49.5, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(8.5, 50, 11); glVertex3f(8.5, 50, -11);
    glVertex3f(9, 50, -11); glVertex3f(9, 50, 11);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(9, 50.5, 12); glVertex3f(9, 50.5, -12);
    glVertex3f(9, 51, -12); glVertex3f(9, 51, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-8.5, 50.5, 12); glVertex3f(-8.5, 50.5, -12);
    glVertex3f(-8.5, 51, -12); glVertex3f(-8.5, 51, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(8.5, 50.5, 12); glVertex3f(8.5, 50.5, -12);
    glVertex3f(9, 50.5, -12); glVertex3f(9, 50.5, 12);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(8.5, 51, 12); glVertex3f(8.5, 51, -12);
    glVertex3f(9, 51, -12); glVertex3f(9, 51, 12);
    glEnd();

    //tiang pagarnya
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-9, 48, -9); glVertex3f(-8.5, 48, -9);
    glVertex3f(-8.5, 51, -9); glVertex3f(-9, 51, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-9, 48, -8.5); glVertex3f(-8.5, 48, -8.5);
    glVertex3f(-8.5, 51, -8.5); glVertex3f(-9, 51, -8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-9, 48, -8.5); glVertex3f(-9, 48, -9);
    glVertex3f(-9, 51, -9); glVertex3f(-9, 51, -8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-8.5, 48, -8.5); glVertex3f(-8.5, 48, -9);
    glVertex3f(-8.5, 51, -9); glVertex3f(-8.5, 51, -8.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(9, 48, -9); glVertex3f(8.5, 48, -9);
    glVertex3f(8.5, 51, -9); glVertex3f(9, 51, -9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(9, 48, -8.5); glVertex3f(8.5, 48, -8.5);
    glVertex3f(8.5, 51, -8.5); glVertex3f(9, 51, -8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(9, 48, -8.5); glVertex3f(9, 48, -9);
    glVertex3f(9, 51, -9); glVertex3f(9, 51, -8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(8.5, 48, -8.5); glVertex3f(8.5, 48, -9);
    glVertex3f(8.5, 51, -9); glVertex3f(8.5, 51, -8.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-9, 48, 9); glVertex3f(-8.5, 48, 9);
    glVertex3f(-8.5, 51, 9); glVertex3f(-9, 51, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-9, 48, 8.5); glVertex3f(-8.5, 48, 8.5);
    glVertex3f(-8.5, 51, 8.5); glVertex3f(-9, 51, 8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-9, 48, 8.5); glVertex3f(-9, 48, 9);
    glVertex3f(-9, 51, 9); glVertex3f(-9, 51, 8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-8.5, 48, 8.5); glVertex3f(-8.5, 48, 9);
    glVertex3f(-8.5, 51, 9); glVertex3f(-8.5, 51, 8.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(9, 48, 9); glVertex3f(8.5, 48, 9);
    glVertex3f(8.5, 51, 9); glVertex3f(9, 51, 9);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(9, 48, 8.5); glVertex3f(8.5, 48, 8.5);
    glVertex3f(8.5, 51, 8.5); glVertex3f(9, 51, 8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(9, 48, 8.5); glVertex3f(9, 48, 9);
    glVertex3f(9, 51, 9); glVertex3f(9, 51, 8.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(8.5, 48, 8.5); glVertex3f(8.5, 48, 9);
    glVertex3f(8.5, 51, 9); glVertex3f(8.5, 51, 8.5);
    glEnd();


    //pagar merah belakang pondasi base
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-21, -6, -20); glVertex3f(21, -6, -20);
    glVertex3f(21, -5, -20); glVertex3f(-21, -5, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-21, -6, -19.5); glVertex3f(21, -6, -19.5);
    glVertex3f(21, -5, -19.5); glVertex3f(-21, -5, -19.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-21, -6, -19.5); glVertex3f(21, -6, -19.5);
    glVertex3f(21, -6, -20); glVertex3f(-21, -6, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-21, -5, -19.5); glVertex3f(21, -5, -19.5);
    glVertex3f(21, -5, -20); glVertex3f(-21, -5, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-22, -4, -20); glVertex3f(22, -4, -20);
    glVertex3f(22, -3, -20); glVertex3f(-22, -3, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-22, -4, -19.5); glVertex3f(22, -4, -19.5);
    glVertex3f(22, -3, -19.5); glVertex3f(-22, -3, -19.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-22, -4, -19.5); glVertex3f(22, -4, -19.5);
    glVertex3f(22, -4, -20); glVertex3f(-22, -4, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-22, -3, -19.5); glVertex3f(22, -3, -19.5);
    glVertex3f(22, -3, -20); glVertex3f(-22, -3, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-23, -2, -20); glVertex3f(23, -2, -20);
    glVertex3f(23, -1, -20); glVertex3f(-23, -1, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-23, -2, -19.5); glVertex3f(23, -2, -19.5);
    glVertex3f(23, -1, -19.5); glVertex3f(-23, -1, -19.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-23, -2, -19.5); glVertex3f(23, -2, -19.5);
    glVertex3f(23, -2, -20); glVertex3f(-23, -2, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-23, -1, -19.5); glVertex3f(23, -1, -19.5);
    glVertex3f(23, -1, -20); glVertex3f(-23, -1, -20);
    glEnd();

    //pagar merah kiri pondasi 1
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-20, -6, 21); glVertex3f(-20, -6, -21);
    glVertex3f(-20, -5, -21); glVertex3f(-20, -5, 21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-19.5, -6, 21); glVertex3f(-19.5, -6, -21);
    glVertex3f(-19.5, -5, -21); glVertex3f(-19.5, -5, 21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-19.5, -6, 21); glVertex3f(-19.5, -6, -21);
    glVertex3f(-20, -6, -21); glVertex3f(-20, -6, 21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-19.5, -5, 21); glVertex3f(-19.5, -5, -21);
    glVertex3f(-20, -5, -21); glVertex3f(-20, -5, 21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-20, -4, 22); glVertex3f(-20, -4, -22);
    glVertex3f(-20, -3, -22); glVertex3f(-20, -3, 22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-19.5, -4, 22); glVertex3f(-19.5, -4, -22);
    glVertex3f(-19.5, -3, -22); glVertex3f(-19.5, -3, 22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-19.5, -4, 22); glVertex3f(-19.5, -4, -22);
    glVertex3f(-20, -4, -22); glVertex3f(-20, -4, 22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-19.5, -3, 22); glVertex3f(-19.5, -3, -22);
    glVertex3f(-20, -3, -22); glVertex3f(-20, -3, 22);
    glEnd(); glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-20, -2, 23); glVertex3f(-20, -2, -23);
    glVertex3f(-20, -1, -23); glVertex3f(-20, -1, 23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-19.5, -2, 23); glVertex3f(-19.5, -2, -23);
    glVertex3f(-19.5, -1, -23); glVertex3f(-19.5, -1, 23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-19.5, -2, 23); glVertex3f(-19.5, -2, -23);
    glVertex3f(-20, -2, -23); glVertex3f(-20, -2, 23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-19.5, -1, 23); glVertex3f(-19.5, -1, -23);
    glVertex3f(-20, -1, -23); glVertex3f(-20, -1, 23);
    glEnd();

    //pagar merah kanan pondasi 1
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(20, -6, 21); glVertex3f(20, -6, -21);
    glVertex3f(20, -5, -21); glVertex3f(20, -5, 21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-19.5, -6, 21); glVertex3f(-19.5, -6, -21);
    glVertex3f(-19.5, -5, -21); glVertex3f(-19.5, -5, 21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(19.5, -6, 21); glVertex3f(19.5, -6, -21);
    glVertex3f(20, -6, -21); glVertex3f(20, -6, 21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(19.5, -5, 21); glVertex3f(19.5, -5, -21);
    glVertex3f(20, -5, -21); glVertex3f(20, -5, 21);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(20, -4, 22); glVertex3f(20, -4, -22);
    glVertex3f(20, -3, -22); glVertex3f(20, -3, 22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-19.5, -4, 22); glVertex3f(-19.5, -4, -22);
    glVertex3f(-19.5, -3, -22); glVertex3f(-19.5, -3, 22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(19.5, -4, 22); glVertex3f(19.5, -4, -22);
    glVertex3f(20, -4, -22); glVertex3f(20, -4, 22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(19.5, -3, 22); glVertex3f(19.5, -3, -22);
    glVertex3f(20, -3, -22); glVertex3f(20, -3, 22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(20, -2, 23); glVertex3f(20, -2, -23);
    glVertex3f(20, -1, -23); glVertex3f(20, -1, 23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-19.5, -2, 23); glVertex3f(-19.5, -2, -23);
    glVertex3f(-19.5, -1, -23); glVertex3f(-19.5, -1, 23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(19.5, -2, 23); glVertex3f(19.5, -2, -23);
    glVertex3f(20, -2, -23); glVertex3f(20, -2, 23);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(19.5, -1, 23); glVertex3f(19.5, -1, -23);
    glVertex3f(20, -1, -23); glVertex3f(20, -1, 23);
    glEnd();


    //tiang pagarnya
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-20, -7, -20); glVertex3f(-19, -7, -20);
    glVertex3f(-19, 0, -20); glVertex3f(-20, 0, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-20, -7, -19); glVertex3f(-19, -7, -19);
    glVertex3f(-19, 0, -19); glVertex3f(-20, 0, -19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-20, -7, -19); glVertex3f(-20, -7, -20);
    glVertex3f(-20, 0, -20); glVertex3f(-20, 0, -19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-19, -7, -19); glVertex3f(-19, -7, -20);
    glVertex3f(-19, 0, -20); glVertex3f(-19, 0, -19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(20, -7, -20); glVertex3f(19, -7, -20);
    glVertex3f(19, 0, -20); glVertex3f(20, 0, -20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(20, -7, -19); glVertex3f(19, -7, -19);
    glVertex3f(19, 0, -19); glVertex3f(20, 0, -19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(20, -7, -19); glVertex3f(20, -7, -20);
    glVertex3f(20, 0, -20); glVertex3f(20, 0, -19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(19, -7, -19); glVertex3f(19, -7, -20);
    glVertex3f(19, 0, -20); glVertex3f(19, 0, -19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-20, -7, 20); glVertex3f(-19, -7, 20);
    glVertex3f(-19, 0, 20); glVertex3f(-20, 0, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-20, -7, 19); glVertex3f(-19, -7, 19);
    glVertex3f(-19, 0, 19); glVertex3f(-20, 0, 19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-20, -7, 19); glVertex3f(-20, -7, 20);
    glVertex3f(-20, 0, 20); glVertex3f(-20, 0, 19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-19, -7, 19); glVertex3f(-19, -7, 20);
    glVertex3f(-19, 0, 20); glVertex3f(-19, 0, 19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(20, -7, 20); glVertex3f(19, -7, 20);
    glVertex3f(19, 0, 20); glVertex3f(20, 0, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(20, -7, 19); glVertex3f(19, -7, 19);
    glVertex3f(19, 0, 19); glVertex3f(20, 0, 19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(20, -7, 19); glVertex3f(20, -7, 20);
    glVertex3f(20, 0, 20); glVertex3f(20, 0, 19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(19, -7, 19); glVertex3f(19, -7, 20);
    glVertex3f(19, 0, 20); glVertex3f(19, 0, 19);
    glEnd();




    //pagar merah depan pondasi base kanan
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(8, -6, 20); glVertex3f(21, -6, 20);
    glVertex3f(21, -5, 20); glVertex3f(8, -5, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(8, -6, 19.5); glVertex3f(21, -6, 19.5);
    glVertex3f(21, -5, 19.5); glVertex3f(8, -5, 19.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(8, -6, 19.5); glVertex3f(21, -6, 19.5);
    glVertex3f(21, -6, 20); glVertex3f(8, -6, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(8, -5, 19.5); glVertex3f(21, -5, 19.5);
    glVertex3f(21, -5, 20); glVertex3f(8, -5, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(8, -4, 20); glVertex3f(22, -4, 20);
    glVertex3f(22, -3, 20); glVertex3f(8, -3, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(8, -4, 19.5); glVertex3f(22, -4, 19.5);
    glVertex3f(22, -3, 19.5); glVertex3f(8, -3, 19.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(8, -4, 19.5); glVertex3f(22, -4, 19.5);
    glVertex3f(22, -4, 20); glVertex3f(8, -4, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(8, -3, 19.5); glVertex3f(22, -3, 19.5);
    glVertex3f(22, -3, 20); glVertex3f(8, -3, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(8, -2, 20); glVertex3f(23, -2, 20);
    glVertex3f(23, -1, 20); glVertex3f(8, -1, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(8, -2, 19.5); glVertex3f(23, -2, 19.5);
    glVertex3f(23, -1, 19.5); glVertex3f(8, -1, 19.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(8, -2, 19.5); glVertex3f(23, -2, 19.5);
    glVertex3f(23, -2, 20); glVertex3f(8, -2, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(8, -1, 19.5); glVertex3f(23, -1, 19.5);
    glVertex3f(23, -1, 20); glVertex3f(8, -1, 20);
    glEnd();




    //pagar merah depan pondasi base kiri
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-8, -6, 20); glVertex3f(-21, -6, 20);
    glVertex3f(-21, -5, 20); glVertex3f(-8, -5, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-8, -6, 19.5); glVertex3f(-21, -6, 19.5);
    glVertex3f(-21, -5, 19.5); glVertex3f(-8, -5, 19.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-8, -6, 19.5); glVertex3f(-21, -6, 19.5);
    glVertex3f(-21, -6, 20); glVertex3f(-8, -6, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-8, -5, 19.5); glVertex3f(-21, -5, 19.5);
    glVertex3f(-21, -5, 20); glVertex3f(-8, -5, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-8, -4, 20); glVertex3f(-22, -4, 20);
    glVertex3f(-22, -3, 20); glVertex3f(-8, -3, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(-8, -4, 19.5); glVertex3f(-22, -4, 19.5);
    glVertex3f(-22, -3, 19.5); glVertex3f(-8, -3, 19.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-8, -4, 19.5); glVertex3f(-22, -4, 19.5);
    glVertex3f(-22, -4, 20); glVertex3f(-8, -4, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(-8, -3, 19.5); glVertex3f(-22, -3, 19.5);
    glVertex3f(-22, -3, 20); glVertex3f(-8, -3, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-8, -2, 20); glVertex3f(-23, -2, 20);
    glVertex3f(-23, -1, 20); glVertex3f(-8, -1, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 109, 6);
    glVertex3f(-8, -2, 19.5); glVertex3f(-23, -2, 19.5);
    glVertex3f(-23, -1, 19.5); glVertex3f(-8, -1, 19.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-8, -2, 19.5); glVertex3f(-23, -2, 19.5);
    glVertex3f(-23, -2, 20); glVertex3f(-8, -2, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 129, 6);
    glVertex3f(-8, -1, 19.5); glVertex3f(-23, -1, 19.5);
    glVertex3f(-23, -1, 20); glVertex3f(-8, -1, 20);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-9.5, -7, 20); glVertex3f(-8, -7, 20);
    glVertex3f(-8, 1, 20); glVertex3f(-9.5, 1, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 29, 6);
    glVertex3f(-9.5, -7, 19); glVertex3f(-8, -7, 19);
    glVertex3f(-8, 1, 19); glVertex3f(-9.5, 1, 19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-9.5, -7, 19); glVertex3f(-9.5, -7, 20);
    glVertex3f(-9.5, 1, 20); glVertex3f(-9.5, 1, 19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 49, 6);
    glVertex3f(-8, -7, 19); glVertex3f(-8, -7, 20);
    glVertex3f(-8, 1, 20); glVertex3f(-8, 1, 19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(9.5, -7, 20); glVertex3f(8, -7, 20);
    glVertex3f(8, 1, 20); glVertex3f(9.5, 1, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 69, 6);
    glVertex3f(9.5, -7, 19); glVertex3f(8, -7, 19);
    glVertex3f(8, 1, 19); glVertex3f(9.5, 1, 19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(9.5, -7, 19); glVertex3f(9.5, -7, 20);
    glVertex3f(9.5, 1, 20); glVertex3f(9.5, 1, 19);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(198, 89, 6);
    glVertex3f(8, -7, 19); glVertex3f(8, -7, 20);
    glVertex3f(8, 1, 20); glVertex3f(8, 1, 19);
    glEnd();










}
void tampil()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    LV();
    Gambar();
    glutSwapBuffers();
}

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(75, (GLsizei)w / (GLsizei)h, 1, 300);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int value)   //putara
{
    yp += 10;
    if (yp >= 360) {
        yp = 0;
    }
    glutPostRedisplay();
    glutTimerFunc(100, timer, 0); //10 ms - 1000/10 = 100 fps
}
void keyboard1(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
        fy += 2;
        break;
    case 's':
        fy -= 2;
        break;
    case 'a':
        fx -= 2;
        break;
    case 'd':
        fx += 2;
        break;
    case 'o':
        fz -= 2;
        break;
    case 'l':
        fz += 2;
        break;
    case 27:
        exit(0);
        break;
    }
}
void keyboard2(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_PAGE_UP:
        tz -= 2;
        break;
    case GLUT_KEY_PAGE_DOWN:
        tz += 2;
        break;
    case GLUT_KEY_RIGHT:
        tx += 2;
        break;
    case GLUT_KEY_LEFT:
        tx -= 2;
        break;
    case GLUT_KEY_UP:
        ty += 2;
        break;
    case GLUT_KEY_DOWN:
        ty -= 2;
        break;
    }
}
int main()
{
    glutInit(&__argc, __argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(50, 10);
    glutInitWindowSize(1000, 700);
    glutCreateWindow("Arakura Fuji Shrine by Altaha 181401056");
    glClearColor(255, 255, 255, 0);
    glOrtho(-2, 2, -2, 2, -2, 2);
    glutDisplayFunc(tampil);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard1);
    glutSpecialFunc(keyboard2);
    glutTimerFunc(1, timer, 0);
    glutMainLoop();
}