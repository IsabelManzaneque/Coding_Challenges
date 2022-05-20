
public class myClass{
	
		
	public static boolean mazeMethod(int [][] maze, int x, int y) {
		
		
		if(x > maze.length-1 || y > maze[0].length-1 || x < 0 || y < 0) {return false;} // out of boundaries
		
		if(maze[x][y] == 1 ) {return false;}		                                    // obstaculo
		 
		if(x == maze.length-1 && y == maze[0].length-1) {return true;}                  // meta alcanzada		
		
		
		maze[x][y] = 1;
		
		// Existe una salida desde la posicion actual si existe una salida desde cualquiera de las posiciones adyacente 
		boolean exit = (mazeMethod(maze, x + 1, y) || mazeMethod(maze, x-1, y) || mazeMethod(maze, x, y+1) || mazeMethod(maze, x, y-1));
		
		maze[x][y] = 0;
		
		return exit;
	}
	
	public static void main(String[] args) {
	
		
		int[][] arr = {{0,1,1,1}, {0,0,1,1}, {1,0,1,1}, {0,0,1,1}, {0,1,1,1}, {0,0,0,0}};
		
		System.out.println(mazeMethod(arr,0,0));	

	}
				
}


