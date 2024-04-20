#ifndef TREE_H
#define TREE_H

    #include<iostream>
    #include "TreeNode.h"
    using namespace std;
    template <typename NODETYPE> class Tree
    {    
        public:
            //constructor
            Tree()
            :rootptr(nullptr){    }

            //insert a node in the tree
            void InsertNode(const NODETYPE &value)
            {
                insertNodeHelper(&rootptr,value);
            }

            //begin preorder traversal of tree
            void preorderTraversal()const
            {
                preorderHelper(rootptr);
            }

            //begin inorder traversal of tree
            void inorderTraversal()const
            {
                inorderHelper(rootptr);
            }
            
            //begin postorder traversal of tree
            void postorderTraversal()const
            {
                postorderHelper(rootptr);
            }

            int WhatIsTheDepthOfTree()
            {
                return WhatIsTheDepthOfTreehelper(&rootptr);
            }


        private:
            TreeNode<NODETYPE> *rootptr;
            void insertNodeHelper(TreeNode <NODETYPE>**ptr,const NODETYPE &value)
            {
                if (*ptr==nullptr)
                *ptr=new TreeNode<NODETYPE>(value);
                else
                {
                    if(value<(*ptr)->data)
                    {
                        insertNodeHelper(&((*ptr)->leftpr),value);
                    }
                    else
                    {
                        if(value> ((*ptr)->data))
                        {
                         insertNodeHelper(&((*ptr)->rightptr),value);
                        }
                        else
                        {
                         cout<<value<<"dub"<<endl;
                        }
                    }
                }
            }


            void preorderHelper(TreeNode<NODETYPE>*ptr)const
            {
                //a very clever way to use recursion
                //keep going to display each left node till you find null
                //then go back to the original call and do the same for the right nodes
                if(ptr!=nullptr)
                {
                    cout<<ptr->data<<' ';
                    preorderHelper(ptr->leftpr);
                    preorderHelper(ptr->rightptr);
                }
            }


            void inorderHelper(TreeNode<NODETYPE>*ptr)const
            {
                if(ptr!=nullptr)
                {
                    inorderHelper(ptr->leftpr);
                    cout<<ptr->data<<' ';
                    inorderHelper(ptr->rightptr);
                }
            }

            void postorderHelper(TreeNode <NODETYPE>*ptr)const
            {
                if(ptr != nullptr)
                {
                    postorderHelper(ptr->leftpr);
                    postorderHelper(ptr->rightptr);
                    cout<<ptr->data<<' ';
                }
            }

            int WhatIsTheDepthOfTreehelper(TreeNode <NODETYPE>**ptr)
            {
                //the function will keep recursing untill it reaches nullptr
                //then it will return max between left and right which will be in the 
                //depest stack call =0 but the return has 1+ 
                //so it will keep returning 1+1+1+ untill it reaches the 
                //original left+= call and add all the 1+1+... to it
                //and then do the same for the right+= call 
                //then do a final max between the left and right to return the depth of the tree
                //the function will cover the depest point because it will keep going untill 
                //it reeaches a node that doesn't point to anything
                int left=0;
                int right=0;
                if(*ptr!=nullptr)
                {
                    if((*ptr)->leftpr!=nullptr && ((*ptr)->rightptr)==nullptr)
                    {
                        return (1+ WhatIsTheDepthOfTreehelper(&(*ptr)->leftpr));
                    }
                    else if (((*ptr)->rightptr)!=nullptr && (*ptr)->leftpr==nullptr)
                    {
                        return (1+ WhatIsTheDepthOfTreehelper(&(*ptr)->rightptr));
                    }
                    else if(((*ptr)->rightptr)!=nullptr  && ((*ptr)->leftpr)!=nullptr )
                    {
                        left+=(1+ WhatIsTheDepthOfTreehelper(&(*ptr)->leftpr));
                        right+=(1+ WhatIsTheDepthOfTreehelper(&(*ptr)->rightptr));
                    }
                }
                return max(left,right);
            }
    };



#endif