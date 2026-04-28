class Solution {
    public List<List<Integer>> permute(int[] arr) {
        List<List<Integer>> result=new ArrayList<>();
        boolean used[]=new boolean[arr.length];
        Arrays.fill(used,false);
        perm(0,arr,used,new ArrayList<>(),result);
        return result;
        
    }
    public void perm(int i, int arr[], boolean used[], List<Integer> current,List<List<Integer>> result){

        if(i==arr.length) {
        result.add(new ArrayList<>(current)); return ; }
        
        for(int j=0;j<arr.length;j++){
            if(used[j]) continue;
            used[j]=true;
            current.add(arr[j]);
            perm(i+1, arr,used,current,result);
            current.remove(current.size()-1);  
            used[j]=false;      }
    }
}