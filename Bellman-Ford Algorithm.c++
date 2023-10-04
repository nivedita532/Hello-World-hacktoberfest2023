vector<int> bellman_ford(int n, vector<vector<int>>& edges, int S) {

	    vector<int>dist(n,1e8);
	    dist[S]=0;
	    
	    for(int i=0;i<n-1;i++){
	        for(auto edge:edges){
	            int u=edge[0];
	            int v=edge[1];
	            int wt=edge[2];
	            
	            if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]){
	                dist[v]=dist[u]+wt;
	            }
	        }
	    }
	    
	    for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            int wt=edge[2];
            
            if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]){
                return {-1};
            }
	    }
	  
	  return dist;
    }
