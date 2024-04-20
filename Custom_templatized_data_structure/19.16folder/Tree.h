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
                        if(value>= ((*ptr)->data))
                        {
                         insertNodeHelper(&((*ptr)->rightptr),value);
                        }
                        // else
                        // {
                        //  cout<<value<<"dub"<<endl;
                        // }
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
    };



#endif