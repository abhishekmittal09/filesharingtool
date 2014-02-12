//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)
//Author: Invader(jujojujo_2003)

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();
//Author: Invader(jujojujo_2003)

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();

//Following is a basic skeleton of the entire game that you are to make. Below are a basic division of the files.
//Note: This structure is just a suggestion that you MAY use. You don't HAVE to follow it. But, it is a good coding practice to design you're code in a nice manner.
//Break them up into smaller modules and classes that can be called and modified easily. ( Whatever you learnt in SSAD is actually good :P Maybe you'll just realize it later in lyf )
//This is just a very simplistic breakdown of the problem, feel free to use/modify it as you please.

//Physics.h
//The physics world handles all the physics and physics objects. Update methods of physics Objects are called by the update method in the physics world
class PhysicsWorld
{
	double gravity;                         //Global Gravity
	bool init();                            //All initializationof variables ,etc must be done
	bool update(double time);               //Update Physics world by time seconds.
	bool addObject(PhysicsObject a);        //Add Physics object to world. An update() should affect this object.
	bool removeObject(PhysicsObject a);     //Remove Physics object from world . An update() should not affect this object.
	bool destroy();                         //Destroy the world, All free() ,delete functions must be called here
}

//PhysicsObject.h
//Deals with the individual attributes like velocity,restitution,friction,etc of a physics object 
class PhysicsObject
{
	double x,y,z;                            //X,Y,Z Co-ordinates
	double angle_x,angle_y,angle_z;          //X,Y,Z Angles
	double v_x,v_y,v_z;                      //Velocity along each axis
	double v_angle_x,v_angle_y,v_angle_z;    //Angular Velocity Along Each axis
	double mass,friction,restitution;             
	bool movable,gravity_enable;             //Certain static objects are there for which movable can be set to false, and certain blocks move but not affected by gravity
	bool update(double time);                //Update Physics of object by time Seconds.
	vector<pair<double,double> > Edges;      //EDges of the cubes wrt x,y,z
}

//GLObject.h
//A generic OpenGL object class. Any object should implement render() function.
class GLObject
{
	virtual bool render();                   //Render the object
	vector<int> texture_id;                  //Texture ID
}

//Body.h
class Body
{
	GLObject gl_obj;                         //Each charecter has a Open-GL object 
	PhysicsObject phy_obj;                   //and a physics object associated with it.
	bool render();                           //Render the object by glPushMatrix(),glTranslate() to the coordinates dictated by the Physics object
						 //and then glRotate() according to the physics object and then render the GLObject and then glPopMatrix().
}


//Example Usage:-
//If you want to make it modular , write these class each in separate .h files.
class GLHumanoid:public GLObject
{
	bool render()
	{
	}
};
class GLBlock::public GLObject
{
	bool render();
	{
		// The opengl commands to draw lines triangles etc comes here.
	}
}

//main.cpp
int main()
{
      PhysicsWorld world; 

      vector<Body> render_obj;


      Body humanioid;
      humanoid.gl_obj=new GLHumanoid();
      humanoid.phy_obj=new PhysicsObject();
      world.addObject(humanoid.phy_obj);
      render_obj.push_back(humanoid);

      for(int i=0;i<no_of_blocks;i++)
      {
	      Body block;
	      block.gl_obj=new  GLBlock();
              block.phy_obj=new PhysicsObject();
	      block.phy_obj.restitution=0.5;
	      block.phy_obj.x=100;
	      ...
	      world.addObject(block.phy_obj);
	      render_obj.push_back(block);
      }
}

//In the render code ,to be put in display function
for(int i=0;i<render_obj.size();i++)
      render_obj[i].render();


//In the update code ,can be put in display function or separately with higher frequency
world.update();
